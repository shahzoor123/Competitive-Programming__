#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long ans=1,m=1e9+7;
		for(long long i=3;i<=2*n;i++)ans=ans*i%m;
		cout<<ans<<endl;
	}
	return 0;
}