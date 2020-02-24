#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll getAns(int* input, const int &n, const int &p) {
	sort(input, input+n);
	ll* sum = new ll[n+1];
	sum[0] = 0;
	sum[1] = input[0];
	for(int i = 2; i < p; i++) {
		sum[i] = sum[i-1] + input[i-1];
	}

	ll min = 10000000002;
	ll needed_till_here;
	ll start = 0;
	for(int i = p; i <= n; i++) {
		sum[i] = sum[i-1] + input[i-1];
		needed_till_here = ((p-1) * input[i-1]) - (sum[i-1]-sum[start]);
		if(needed_till_here < min) {
			min = needed_till_here;
		}
		start++;
	}

	delete []sum;
	return min;
}

int main () {
	int t;
	cin >> t;
	for(int j = 0; j < t; j++) {
		int n, p;
		cin >> n >> p;
		int* input = new int[n];
		for(int i = 0; i < n; i++) {
			cin >> input[i];
		}

		ll ans = getAns(input, n, p);
		delete []input;
		cout << "Case #" << j+1 << ": " << ans << endl;
	}
}
