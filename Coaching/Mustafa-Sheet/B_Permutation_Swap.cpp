#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n,x,ans;
	cin >> t;
	while(t--) {
		cin >> n;
		ans=0;
		for(int i=1;i<=n;i++) {
			cin >> x;
			ans=__gcd(ans,abs(i-x));
		}
		cout << ans << endl; 
	}
}