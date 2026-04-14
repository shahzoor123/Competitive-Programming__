#include<bits/stdc++.h>
using namespace std;

main() {
	int n;
	cin >> n;

	int arr[n][n] = {0};

	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i == 0 || j == 0) {      
            arr[i][j] = 1;           
        	}
		}

	}


	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (arr[i][j] == 0) {      
            	arr[i][j] = arr[i-1][j] + arr[i][j-1];       
        	}
		}
	}


	cout << arr[n-1][n-1];







}