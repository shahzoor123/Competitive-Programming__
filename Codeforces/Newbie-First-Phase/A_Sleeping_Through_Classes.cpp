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
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    int classesTotake = 0;
    int nextAwakeUntil = -1;

    for (int i = 0; i < n; i++) {
        if(s[i] == '1'){
            nextAwakeUntil = max(nextAwakeUntil, i+k);
        }
        else{
            if(i > nextAwakeUntil){
                classesTotake++;
            }
        }
    }

    cout << classesTotake << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}