#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  
  
  
  
*/

// Claims on Algo
/*
  
  
*/

int n,a[105];


void solve(){
    cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<n;i++)
		if(a[i]>a[i+1]){
			puts("YES");
			cout<<"2\n"<<a[i]<<' '<<a[i+1]<<'\n';
			return;
		}
	puts("NO");

    

    
}

int main(){
    int t;
    cin >> t;
    while(t--){
    solve();
    }
    return 0;
}