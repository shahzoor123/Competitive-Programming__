#include<bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;


	while (t--){

		long long int a,b,n;
		cin >> a >> b >> n;

		long long int operations = 0;

		while(a < n || b < n){

			// cout << "a - b " << a << " " << b << endl;

			if (a < b) {
				a += b;
				if (a > n) {
					break;
				}
			}
			else {
				b += a;
				if (b > n) {
					break;
				}
			}
		
			operations++;

		}


	cout << operations + 1 << endl;


	}
}