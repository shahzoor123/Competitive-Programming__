#include <bits/stdc++.h>
using namespace std;


int main() {

	string str;
	cin >> str;

	string str_reverse;

	for (int i=str.size()-1; i>=0; --i) {
		// Dont not use because we are concatinating charactors in strings
		// str_reverse += str[i];

		// Instead use this 

		str_reverse.push_back(str[i]);
	}

	cout << str_reverse;

	
	
}


