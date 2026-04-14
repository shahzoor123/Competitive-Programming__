#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+5;
ll a[N];

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  
  
  
  
*/

// Claims on Algo
/*
  
  
*/

void solve(){

    int n;
	ll sum=0,p=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sum/=n;
	for(int i=0;i<n;i++){
		if(p+a[i]<sum){
			cout<<"NO"<<endl;
			return ;
		}
		p+=a[i]-sum;
	}
	cout<<"YES"<<endl;
    

}

int main(){

    int t;
    cin >> t;
    while(t--){
    solve();
    }

    return 0;
}