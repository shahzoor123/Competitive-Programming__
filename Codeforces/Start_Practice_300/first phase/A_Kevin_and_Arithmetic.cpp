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

void solve(){
    int n,s=0;bool x=0;cin>>n;
	for(int i=0,a;i<n;i++){
			cin>>a;
			if(a&1)s++;
			else x=1;
	}
	if(x)cout<<s+1<<'\n';
	else cout<<s-1<<'\n';


}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}