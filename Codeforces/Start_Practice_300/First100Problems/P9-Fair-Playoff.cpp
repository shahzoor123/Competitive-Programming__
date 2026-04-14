#include<bits/stdc++.h>
using namespace std;


int findLargest(int arr[], int n) {
    int largest = INT_MIN; // Initialize to the smallest possible integer value

    for (int i = 0; i < n; i++) { // Loop through the array
        if (arr[i] > largest) {  // Compare array elements, not the index
            largest = arr[i];    // Update largest if current element is larger
        }
    }

    return largest;
}


int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array must have at least two elements!" << endl;
        return -1; // Indicate an error
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = arr[i];        // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; // Update second largest
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No distinct second largest element found!" << endl;
        return -1; // Indicate no second largest element
    }

    return secondLargest;
}


main() {
	int t;
	cin >> t;

	int  n = 4;

	while (t--){

		int arr[4];
		

		bool firstHalfValid = false, secondHalfValid = false;

		// Putting values in array
		for (int i=0;i<4;i++){
			cin >> arr[i];
			
		}


		int first_largest =  findLargest(arr, n);
		int second_largest =  findSecondLargest(arr, n);

		// Checking in the first half
		for (int i=0;i<n/2;i++){
			if (arr[i] == first_largest || arr[i] == second_largest){
				firstHalfValid = true;
				break;
			}
		}

		// Checking in the second half
		for (int i=n/2;i<n;i++){
			if (arr[i] == first_largest || arr[i] == second_largest){
				secondHalfValid = true;
				
			}
			
		}

		if (firstHalfValid && secondHalfValid){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	
	}

}