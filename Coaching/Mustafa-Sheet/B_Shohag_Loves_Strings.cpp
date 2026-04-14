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
    cin >> s;

    int n = s.size();
    bool visible=0;
    for(int i=0; !visible && i<n-1; ++i)
        if(s[i]==s[i+1]) {
            visible=1;
            cout<<s[i]<<s[i+1]<<endl;
        } else if(i<n-2&&s[i]!=s[i+2]&&s[i+1]!=s[i+2]) {
            visible=1;
            cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
        }
    if(!visible) cout<<-1<<endl;



    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}