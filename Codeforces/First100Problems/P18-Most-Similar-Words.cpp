#include<bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;


	while (t--){

		int n,m;
		cin >> n >> m;

		string arr[n];
		vector<int> result_array;

		string str1;
        string str2;


		for (int i=0;i<n;i++){
			cin >> arr[i];
		}


		// Compare each string with each other
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) { // Start j from i + 1 to avoid redundant comparisons
                string str1 = arr[i];
                string str2 = arr[j];

                int point = 0;

                // Compare the strings character by character and calculate ASCII difference
                for (int k = 0; k < m; k++) {
                    int diff = abs(int(str1[k]) - int(str2[k])); // ASCII difference
                    point += diff;
                }

                // Store the result of the comparison
                result_array.push_back(point);
            }
        }



        // for (int i = 0; i < result_array.size(); i++) {
        //     cout << result_array[i] << " ";
        // }
        // cout << endl;


 

        if (!result_array.empty()) {
            int min_value = *min_element(result_array.begin(), result_array.end());
            cout << min_value << endl;
        }



	}


}