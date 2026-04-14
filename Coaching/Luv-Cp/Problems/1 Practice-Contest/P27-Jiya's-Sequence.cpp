#include<bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;


		long long int product_of_numbers = 1;

		for (int i=0;i<n;i++){
			int a;
			cin >> a;
			product_of_numbers *= a;

			if (product_of_numbers == 0){
				break;
			}
			
		}

		if (product_of_numbers % 10 == 2 || product_of_numbers % 10 == 5  || product_of_numbers % 10 == 3) {
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}


	}
	
}	