#include<bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;

	while (t--){
		int n;
		cin >> n;

		string str;
		cin >> str;

		unordered_map<char, int> hashTable;


		if(str.size() == 1) {
			cout << "YES" << endl;
			continue;
		}

		bool flag = false;

		for (int i=0;i<str.size();i++){
			
			if(hashTable.find(str[i]) == hashTable.end()){
				hashTable[str[i]] = i;
			}
			else{
				if (hashTable[str[i]] != i - 1){
					flag = true;
					break;
				}

				hashTable[str[i]] = i;
			}
		
		}

		if (flag){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}

	
	}

}