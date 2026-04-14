#include<bits/stdc++.h>
using namespace std;

main() {
	long long k2,k3,k5,k6;
	cin >> k2 >> k3 >> k5 >> k6;

	long long maximum_sum = 0;

	
	map<long long, int> counts;

	counts[2] = k2;
	counts[3] = k3;
	counts[5] = k5;
	counts[6] = k6;



	while (counts[2] > 0 && counts[5] > 0 && counts[6] > 0) {

		long long new_born = 256;
		maximum_sum += new_born;

		counts[2]--;
		counts[5]--;
		counts[6]--;


	}

	while (counts[3] > 0 && counts[2] > 0) {

		long long new_born = 32;
		maximum_sum += new_born;
		counts[2]--;
		counts[3]--;


	}

	cout << maximum_sum << endl;




	return 0; 



}