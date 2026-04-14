#include<bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;

	while (t--){
		int n;
		cin >> n;

		int arr[n];

		int same_element;

		int count = 0;

		int spy;

		int spy_index;

		int hsh[101] = {0};
	

		for (int i=0;i<n;i++){
			cin >> arr[i];
			hsh[arr[i]]++;
		}

		for (int i=0;i<101;i++){
			// cout << hsh[i];
			if (hsh[i] == 1) {
				spy = i;
				// cout << spy << endl;
			}
		
		}

		for (int i=0;i<n;i++){
			// cout << "i " << i << " " << arr[i] << endl; 
			if (arr[i] == spy){
				spy_index = i + 1; 
			}
		}


		cout << spy_index << endl;
	}

}