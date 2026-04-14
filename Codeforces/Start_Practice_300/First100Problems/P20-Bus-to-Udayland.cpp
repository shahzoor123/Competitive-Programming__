#include<bits/stdc++.h>
using namespace std;

main() {
	int n;
	cin >> n;

	vector<string> bus_array(n);


	for (int i=0;i<n;i++){
		cin >> bus_array[i];
	}



	bool can_enjoy = false; 
    bool replaced_in_any_row = false;



	for (int i=0;i<n;i++){
		bool replaced = false;
		for (int j=0;j<bus_array[i].size() - 1;j++){
			if (bus_array[i][j] == 'O' && bus_array[i][j+1] == 'O' && !replaced_in_any_row){
				 bus_array[i][j] = '+';
				 bus_array[i][j+1] = '+';
				 // cout << "OO found at (" << i << ", " << j << ") horizontally" << endl;
				 can_enjoy = true;
				 replaced_in_any_row = true;
				 break;

			}

		}

		if (replaced_in_any_row){
			break;
		}

	}


	  // Output result
	    if (can_enjoy) {
	        cout << "YES" << endl;
	        // Print the modified bus array
	        for (int i = 0; i < n; i++) {
	            cout << bus_array[i] << endl; // Print each row (string)
	        }
	    } else {
	        cout << "NO" << endl;
	    }


}