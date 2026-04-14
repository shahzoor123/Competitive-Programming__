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
    
    int a[51]={0};
    int n;
    cin>>n;
    int ans=3;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[a[i]]==i) ans=2;
    } 
    cout<<ans<<endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}