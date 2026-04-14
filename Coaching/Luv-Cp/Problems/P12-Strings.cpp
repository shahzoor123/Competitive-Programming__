#include<bits/stdc++.h>
using namespace std;

int main () {
	string str1,str2;
	cin >> str1 >> str2;

	int str1_size = str1.size();
	int str2_size = str2.size();

	string combined_string = str1 + str2;


	char first_charator_of_str1 = str1[0];
	char first_charator_of_str2 = str2[0];

	string swaped_str1 = str1; 
	string swaped_str2 = str2; 

	swaped_str1[0] = first_charator_of_str2;
	swaped_str2[0] = first_charator_of_str1;

	cout << str1_size << " " << str2_size << endl << combined_string << endl << swaped_str1 << " " << swaped_str2;
}	