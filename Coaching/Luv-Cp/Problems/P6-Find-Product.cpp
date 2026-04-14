#include <bits/stdc++.h>
using namespace std;


int main() {
	
	long mod = 1e9 + 7;

	int num;
	cin >> num;
	long long number_product = 1;

	for (int i=0; i<num; i++) {
		
		int n;
		cin >> n;
		number_product = (number_product * n) % mod;
		
	}
	cout << number_product;
}
