#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 3e5 + 10;
int arr[N];


void solve(){


	int n, even_sum = 0, odd_sum = 0, total_sum = 0;
	cin >> n;

	for (int i=1;i<=n;i++){
		cin >> arr[i];
	}


	for (int i=1;i<=n;i++){
		
		if (i % 2) {
			odd_sum += arr[i];
		}

		else  {
			even_sum += arr[i];
		}

		total_sum += arr[i];

	}


	if (total_sum % n == 0) {
		int o = (n + 1) / 2;
		int e = n - o;
		total_sum /= n;
		if (odd_sum == o * total_sum && even_sum == e * total_sum){
			cout << "YES" << endl;
			return;
		}
		
	}

	cout << "NO" << endl;

}



main() {
	int t;
	cin >> t;


	while (t--){

		solve();
		

	}


}