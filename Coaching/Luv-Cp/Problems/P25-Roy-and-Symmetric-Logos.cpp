#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int matrix[n][n];
		for (int i=0 ; i<n; i++) {
			string line;
			cin >> line;

			for (int j=0 ; j<n; j++) {
				matrix[i][j] = line[j] - '0';
			
			}
		}
	

		// Check X-axis symmetry
	    bool xSymmetric = true;
	    for (int i = 0; i < n / 2; ++i) {
	        for (int j = 0; j < n; ++j) {
	            if (matrix[i][j] != matrix[n - i - 1][j]) {
	                xSymmetric = false;
	                break;
	            }
	        }
	        if (!xSymmetric) break;
	    }

	    // Check Y-axis symmetry
	    bool ySymmetric = true;
	    for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < n / 2; ++j) {
	            if (matrix[i][j] != matrix[i][n - j - 1]) {
	                ySymmetric = false;
	                break;
	            }
	        }
	        if (!ySymmetric) break;
	    }

	    // Output the results
	    if (xSymmetric && ySymmetric) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
			
		}

}
