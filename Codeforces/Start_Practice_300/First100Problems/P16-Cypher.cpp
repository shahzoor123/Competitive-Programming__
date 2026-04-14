#include<bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;


	while (t--){


		int n;
		cin >> n;

		int current_codes_array[n];

		for (int i=0;i<n;i++){
			cin >> current_codes_array[i];

		}


		map<int, string> dictionary;

		int lenght; string directions;

		int decoded_array[n];

		for (int i=0;i<n;i++){
			
			cin >> lenght >> directions;

			dictionary[lenght] = directions;

			for (int j=0;j<dictionary[lenght].size();j++){

				char c = dictionary[lenght][j];
 	
 				if (c == 'D') {

 					if (current_codes_array[i] == 9){
 						current_codes_array[i] = 0;
 					}

 					else{
 						current_codes_array[i]++;
 					}

 				}

 				if (c == 'U'){

 					if (current_codes_array[i] == 0){
 						current_codes_array[i] = 9;
 					}

 					else{
 						current_codes_array[i]--;
 					}

 				}
			}

		}


		for (int i=0;i<n;i++){
			cout << current_codes_array[i] << " ";

		}

		cout << endl;

	}

}