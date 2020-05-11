#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long solve() {
	int n;
    long long d;
    cin >> n >> d;
    long long x[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }

    long long limit = d - (d % x[n-1]);

    for(int i = n-2; i >= 0; i--) {
        limit = limit - (limit % x[i]);
    }

    return limit;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
    	long long ans = solve();

        cout << "Case #" << i << ": " << ans << endl;
    }

    return 0;
}
