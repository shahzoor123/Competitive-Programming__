#include<bits/stdc++.h>
using namespace std;

main() {
	long long int k,n,w;
	cin >> k >> n >> w;

	long long int borrow = 0;

	long long int total_cost_of_all_bananas = 0;
	long long int cost_of_every_banana = 0;

	for (int i=0;i<=w;i++){
		cost_of_every_banana = k * i;
		total_cost_of_all_bananas += cost_of_every_banana;
	}

	// cout << total_cost_of_all_bananas;

	borrow = total_cost_of_all_bananas - n;

	if (borrow < 0) {
		cout << 0;
	}
	else{
		cout << borrow;
	}



}