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

    string s;
    cin>>s;
    int n=stoi(s);
    int r=round(sqrt(n));
    if(r>99||r*r!=n) cout<<"-1\n";
    else cout<<"0 "<<r<<'\n';
    


}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}