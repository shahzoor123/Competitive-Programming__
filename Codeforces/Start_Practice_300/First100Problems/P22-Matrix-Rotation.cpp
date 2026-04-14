#include<bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;


	while (t--){

		int n = 2;
		int arr[n][n];

		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++){
				cin >> arr[i][j];
			}
		}

        bool isValid = false;

     	for (int r = 0; r < 4; r++) {

     		bool condition = true;

			// Matrix Rotation
			
			if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1]) {
				isValid = true;
				break;
			}

			int temp = arr[0][0];
			arr[0][0] = arr[1][0];
			arr[1][0] = arr[1][1];
			arr[1][1] = arr[0][1];
			arr[0][1] = temp;
			

		}


		cout << (isValid ? "YES" : "NO") << endl;
	}


}




// 2nd Approach


// #include<bits/stdc++.h>
// using namespace std;

// main() {
// 	int t;
// 	cin >> t;


// 	while (t--){

// 		int n = 2;
// 		int arr[n][n];

// 		for (int i=0;i<n;i++) {
// 			for (int j=0;j<n;j++){
// 				cin >> arr[i][j];
// 			}
// 		}


// 		if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[0+1][0] && arr[0][1] < arr[1][1]) {
// 			cout << "YES" << endl;
// 		}
// 		else{


//         bool isValid = false;


//      	for (int r = 0; r < 4; r++) {

//      		bool condition = true;

// 			// Matrix Rotation
// 			for (int i=0;i<n;i++) {
// 				for (int j=0;j<n;j++){

// 				if (arr[i][j] < arr[0][j+1] && arr[i+1][j] < arr[i+1][j+1] && arr[i][j] < arr[i+1][j] && arr[i][j+1] < arr[i+1][j+1]) {
// 				cout << "YES" << endl;
// 				}

// 				int temp = arr[i][j];
// 				arr[i][j] = arr[i][j+1];
// 				arr[i][j+1] = temp;
				
// 				cout << arr[i][j] << " ";
					
// 				}
// 			}

// 		}

// 		}
		


		// for (int i=0;i<n;i++) {
		// 	for (int j=0;j<n;j++){

		// 		// if {arr[i][j] }
			
		// 		cout << arr[i][j] << " ";
				
		// 	}

		// 	cout << endl;

		// }



		

	





// Conclusion:
// Both approaches have O(t) time complexity and O(1)
//  space complexity, where t is the number of test cases.

// // First Approach is more concise and straightforward,
//  while Second Approach is slightly more complex due 
//  	to the additional condition-checking logic and nested
//  	 loops, but still results in constant time complexity 
//  	 due to the fixed matrix size.