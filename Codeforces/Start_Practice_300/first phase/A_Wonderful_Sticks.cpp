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

    int n, l, r;
    string s;
    cin >> n >> s;
    l = count(s.begin(), s.end(), '<');
    r = ++ l;
    cout << l;
    for(auto &c : s) {
        cout << ' ' << (c == '<' ? -- l : ++ r);
    }
    cout << '\n';

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    
    }

    return 0;
}