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

    long long sum = 0;
    int z = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(!x) z++;
        sum += x;

    }
    cout << min((long long)n-z,sum-(n-1)) << endl;




    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}