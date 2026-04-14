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
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    vector<int> freqS(26, 0), freqT(26, 0);

    for (char c : s) freqS[c - 'a']++;
    for (char c : t) freqT[c - 'a']++;

    if (freqS == freqT)
        cout << "YES\n";
    else
        cout << "NO\n";

    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}