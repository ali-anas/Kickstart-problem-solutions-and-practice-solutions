#include <bits/stdc++.h>
using namespace std;

int getAns(int** input, const int &r, const int &c) {
	int sum[r][c];
}

int main() {
	int t;
	cin >> t;
	for(int tc = 1; tc <= t; t++) {
	    int r,c;
	    cin >> r >> c;
	    int** input = new int*[r];
	    for(int i = 0; i < r; i++) {
	        input[i] = new int[c];
	        for(int j = 0; j < c; j++) {
	            cin >> input[i][j];
	        }
	    }
	    
	    int ans = getAns(input, r, c);
	    cout << "Case #" << tc << ": " << ans << endl;
	    for(int i = 0; i < r; i++) {
	    	delete []input[i];
	    }
	    delete input[i];
	}
	
}
