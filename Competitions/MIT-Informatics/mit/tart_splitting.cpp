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

    string s;
    cin >> s;

    for (int i = 0; i < s.size() - 1; i++) {
        if(s[i] == s[i+1] && s[i] != 'M'){
            cout << -1 << endl;
            return;
        }
    }

    if(s[0] == 'M'){
        cout << 0 << endl;
    } 
    else{
        cout << 1 << endl;
    } 

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}