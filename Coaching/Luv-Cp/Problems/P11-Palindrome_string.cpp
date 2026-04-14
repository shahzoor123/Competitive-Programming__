#include <bits/stdc++.h>
using namespace std;


int main() {

	int t;
	cin >> t;
	cin.ignore();

	while(t--) {

	string str;
	cin >> str;

	string str_reverse;

	for (int i=str.size()-1; i>=0; --i) {
		// Dont not use because we are concatinating charactors in strings
		// str_reverse += str[i];

		// Instead use this 

		str_reverse.push_back(str[i]);
	}

	if (str == str_reverse){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}


	}

	
	// One other way to check palindrome is to use loop and check first last then second and second last wise versa
	
	
}


