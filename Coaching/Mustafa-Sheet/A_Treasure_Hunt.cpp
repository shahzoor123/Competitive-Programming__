#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;cin>>T;
	while(T--){
		int x,y,a;cin>>x>>y>>a;
		if(a%(x+y)+0.5>x)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
} 
