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
    sort(s.begin(),s.end());
    for(int i=9;i>=0;i--){
      int x=lower_bound(s.begin(),s.end(),i+'0')-s.begin();
      cout<<s[x];
      s.erase(s.begin()+x);
    }
    cout<<endl;


}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    
    }

    return 0;
}