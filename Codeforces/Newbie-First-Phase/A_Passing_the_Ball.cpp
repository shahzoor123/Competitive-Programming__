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

    int ans = n;

    for (int i = 0; i < n-1; i++) {
        if(s[i] == 'R' && s[i+1] == 'L'){
            ans = i + 2;
            break;
        }
      
    }


    cout << ans << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}