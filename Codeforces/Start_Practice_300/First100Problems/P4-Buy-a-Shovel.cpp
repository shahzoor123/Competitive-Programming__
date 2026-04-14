#include<bits/stdc++.h>
using namespace std;

main() {
	int k,r;
	cin >> k >> r;



	int minimum_shovels = 0;

	for (int i=1;i<1000;i++){
		int m = k * i;

		// cout << m << " " << m % 10 << endl;
		if (m % 10  == 0 or m % 10 == r) {
			minimum_shovels = i;
			break;
		}
		

	}

	if (minimum_shovels == 0) {
		minimum_shovels = 1;
		cout << minimum_shovels;
	}
	else{
		cout << minimum_shovels;
	}
	
	



}