#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int solve() {

    int n;
    cin >> n;
    int input[n];
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int count = 0;
    for(int i = 1; i < n-1; i++) {
        if(input[i-1] < input[i] && input[i] > input[i+1]) {
            count++;
        }
    }
    return count;
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
    	int ans = solve();
        cout << "Case #" << i << ": " << ans << endl;
    }

    return 0;
}
