#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

// Problem Statement
/*
  
*/

// Small Observations
/*
  
*/

// Claims on Algo
/*
  
*/

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    ll totalOperations = 0;


    
    if(s[0] == 'u'){
        totalOperations++;
        s[0] = 's';
    }


    if(s[n-1] == 'u'){
        totalOperations++;
        s[n-1] = 's';
    }


    for (int i=1;i<n-1;i++){
        if(s[i] == 'u' && s[i+1] == 'u' && s[i-1] == 's'){
            s[i+1] = 's';
            totalOperations++;
        }
        
    }

    cout << totalOperations << endl;

    // Credit goes to Ahsan thanks


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}