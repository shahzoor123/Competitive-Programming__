#include <bits/stdc++.h>
using namespace std;
#define fr(i,s,e) for(int i=s;i<e;i++)

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
    cin >> n;

    set<int> s;
    fr(i,0,n){
        int a,b; cin>>a>>b; 
        if(a>0) s.insert(1);if(a<0) s.insert(2);
    if(b>0) s.insert(3);if(b<0) s.insert(4);
    }
    if(s.size()==4)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}