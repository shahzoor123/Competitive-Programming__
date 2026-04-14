#include <bits/stdc++.h>
using namespace std;


int main() {

	int t;
	cin >> t;

	int count = 0;

	while(t--) {
		string str_J , str_S;
		cin >> str_J >> str_S;


	   for (int i = 0; i < str_S.size(); ++i) {
        	for (int j = 0; j < str_J.size(); ++j) {
            	if (str_S[i] == str_J[j]) {
            		count++;
            		break;
                	
            }
        }
    }

	cout << count << endl;
	count = 0;
	
	}
	
}


