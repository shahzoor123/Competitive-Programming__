#include<bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;


	while (t--){

		int n,m;
		cin >> n >> m;

		vector<string> arr(n);

		for (int i=0;i<n;i++) {
				cin >> arr[i];
		}

		int minimum_cell_count = 0;

		// Counting cell to change in the row
		for (int i=0;i<m - 1;i++) {
			if (arr[n-1][i] != 'R'){
				minimum_cell_count++;
			}
			// cout << arr[i] << endl;
		}

		// Counting cell to change in the last colum
		for (int j=0;j<n-1;j++) {
			if (arr[j][m-1] != 'D'){
				minimum_cell_count++;
			}

			// cout << arr[j] << endl;
		}

	


		cout << minimum_cell_count << endl;
     
	}


}






// If the question demand to also cout the functional converyer belt

		// for (int i=0;i<n;i++) {
		// 	for (int j=0;j<m;j++){

		// 		if (i == 0 && j == 0 && arr[0][0] == 'C'){
		// 		 	minimum_cell_count = 0;
		// 		 	break;
		// 		}

		// 		if (i == 0 && j == 0 && arr[0][0] != 'R'){
		// 		 	arr[0][0] = 'R';
		// 		 	minimum_cell_count += 1;
		// 		}

		// 		if (arr[0][j] == 'D') {
		// 			arr[0][j] = 'R';
		// 			minimum_cell_count += 1;
					

		// 		}
		// 		else{
		// 			if (i == 0 && j == m - 1 && arr[0][j] == 'R'){
		// 				arr[0][m-1] = 'D';
		// 				minimum_cell_count += 1;
		// 			}
		// 			if (arr[i][m-1] == 'R'){
		// 					arr[i][m-1] = 'D';
		// 					minimum_cell_count += 1;
		// 			}
		// 		}	

		// 		cout << arr[i][j];
		// 	}
		// 	cout << endl;
		// }