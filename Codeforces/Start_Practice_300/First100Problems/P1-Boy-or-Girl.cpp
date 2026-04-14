#include<bits/stdc++.h>
using namespace std;

main() {
	string s;
	cin >> s;

	int count = 0;

	int arr[256] = {0};

    for (int i=0;i<s.size();i++) {
    	int ascii = (int)s[i];
        arr[ascii]++;
    }

    for (int i=0;i<256;i++) {
    	if (arr[i] != 0){
    		count++;
    	}
        
    }


	if (count % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else{
		cout << "IGNORE HIM!";
	}

	


}