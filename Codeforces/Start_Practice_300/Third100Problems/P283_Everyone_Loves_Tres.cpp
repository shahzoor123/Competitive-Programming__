#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		if(n == 1 || n == 3) cout << "-1\n";
		else {
			if(n == 2) cout << "66\n";
			else {
				for(int i = 1;i <= n-4;i++) cout << 3;
				cout << (n % 2 ? 6366 : 3366) << endl;
			}
		}
	}
	return 0;
}