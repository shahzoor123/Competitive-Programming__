#include<bits/stdc++.h>
using namespace std;
#include <cmath> // Include the cmath header for pow

int main () {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		int base = 2;
		int power = n;
		long long int decimal = 0;

		for (int i=0;i<n;i++){
			power--;
			int binary = s[i] - '0';
			long long int convert = binary * pow(base, power);
			decimal += convert;

		    // cout << binary << " * 2 ^ " << power << " = " << decimal << endl;
		}

		cout << decimal << endl;		
		


	}
	
}	