#include<bits/stdc++.h>
using namespace std;
int T,n;
signed main(){
	for(cin>>T;T;--T){
		cin>>n;
		if(n&1){
			cout<<n<<' ';
			for(int i=1;i<n;++i)cout<<i<<' ';
			cout<<'\n';
		}else cout<<"-1\n";
	}
}