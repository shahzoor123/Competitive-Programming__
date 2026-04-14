#include<bits/stdc++.h>
using namespace std;

void solve() {



	int n,k;

	cin >> n >> k ;

	vector<int> arr(n);
	unordered_map<int, int> hashTable;
	vector<int> uniqueIndices;


	for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


	for (int i=0;i<n;i++){
        if (hashTable.find(arr[i]) == hashTable.end()) {
            hashTable[arr[i]] = i + 1;
            uniqueIndices.push_back(i + 1);
        }
	}



    if (uniqueIndices.size() >= k ){
    	cout << "YES" << endl;
    	  for (int i = 0; i < k; i++) {
            cout << uniqueIndices[i] << " ";
        }

        cout << endl;
    }
    else{
    	cout << "NO" << endl;
    }




}



main() {
	
	solve();

}