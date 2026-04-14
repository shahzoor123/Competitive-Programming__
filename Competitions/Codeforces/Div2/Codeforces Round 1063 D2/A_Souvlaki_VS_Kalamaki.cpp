#include<bits/stdc++.h>
using namespace std;

const int N=110;
int t,n,a[N];

int main() {
	cin>>t;
	while(t--) {
		cin>>n;
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		sort(a,a+n);
		bool flag=true;
		for(int i=1; i<n-1; i+=2) {
			if(a[i]<a[i+1]) flag=false;
		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
} 
