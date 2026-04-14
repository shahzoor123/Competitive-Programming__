#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	
	while(t--){
		int n;
		cin >> n;

		bool leading_zero = true;


		while (n > 0) {
			int reverse_number = n % 10;
			n = n / 10;
			if (reverse_number != 0 || !leading_zero) {
				cout << reverse_number;
				leading_zero = false;
			}
			
		}
		cout << endl ;
		
	}
	return 0;
}
