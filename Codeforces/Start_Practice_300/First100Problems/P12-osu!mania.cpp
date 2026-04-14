#include<bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;

	while (t--){
		int n;
		cin >> n;

		int column = 4;

		char arr[n][column];

		for (int i=0;i<n;i++) {
			for (int j=0;j<column;j++){
				cin >> arr[i][j];
			}
		}

		for (int i = n - 1;i>=0;i--) {
			for (int j=0;j<column;j++){
				if (arr[i][j] == '#') {
					cout << j + 1 << " ";
				}
			}


		}

		cout << endl;
	
	}

	return 0;

}

