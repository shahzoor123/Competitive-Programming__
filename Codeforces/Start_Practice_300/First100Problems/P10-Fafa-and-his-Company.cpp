#include<bits/stdc++.h>
using namespace std;

main() {



	int n;
	cin >> n;

	int no_of_ways = 0;

	for (int i=1;i<n;i++){
		// cout << "i " << i  << " " << n % i << endl;
		if (n % i == 0) {
			no_of_ways++;
		}
	}


	cout << no_of_ways << endl;




}