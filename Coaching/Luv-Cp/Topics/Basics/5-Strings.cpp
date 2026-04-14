#include <bits/stdc++.h>
using namespace std;


int main() {


	// Charators and Strings

	// char a = 'a';
	// cout << a;


	// string str;
	// cin >> str;
	// cout << str;


	// string str = "hello";
	// string str2 = "hello";

	// string result = str + str2;

	// cout << result;

	// if (str == str2) {
	// 	cout << "Equal";
	// }
	// else{
	// 	cout << "Not Equal";
	// }

	// Size of the string

	// str[0] = 'B';
	// cout << str[0] << str.size();


	// Printing Every Charator Seperately

	// string str = "hello";
	// for (int i=0; i<str.size(); ++i){
	// 	cout << str[i] << endl;
	// }



	// Getting two string as input

	// string str1, str2;
	// cin >> str1 >> str2;
	// cout << str1 << " " << str2;

	


	// Now getting the whole line as a one input 

	// First way concatination


	// string str1, str2;
	// cin >> str1 >> str2;
	// string str3 = str1 + " " + str2;
	// cout << str3;


	// Second  way Getline


	// string str1, str2;
	// getline(cin, str1);
	// getline(cin, str2);
	// cout << str1 << endl << str2 << endl;




	// Taking getline input with loop minor technique how getline works and cin.ignore() will resolve the taking input of a empty line

	// int t;
	// cin >> t;
	// cin.ignore();

	
	// while (t--) {
	//   string str;
	//   getline(cin, str);
	//   cout << str << endl;
	// }
	


	// Dealing with large numbers using strings

	string s;
	cin >> s;

	int last_digit = s[s.size() - 1 ] - '0';
	cout << last_digit; 

	
	
}


