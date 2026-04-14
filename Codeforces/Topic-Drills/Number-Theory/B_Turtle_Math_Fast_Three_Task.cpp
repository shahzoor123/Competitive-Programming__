#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=200005;
int a[N];
void aaa(){
	int n;cin>>n;int sum=0;
	for(int i=1;i<=n;i++) cin>>a[i],sum+=a[i];
	int ans=1e9;
	if(sum%3==0) ans=0;
	else{
		for(int i=1;i<=n;i++){
			if((sum-a[i])%3==0) ans=1;
		}
		ans=min(ans,3-sum%3);
	}
	cout<<ans<<endl;
}
int main(){
	int t;cin>>t;
	while(t--) aaa();
} 