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

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    long long maximumk = 0, minimumk = 0;

    for (int i = 0; i < n; i++) {
        long long new_maximum = max(maximumk - a[i], b[i] - minimumk);
        long long new_minimum = min(minimumk - a[i], b[i] - maximumk);
        maximumk = new_maximum;
        minimumk = new_minimum;
  

    }

    cout << maximumk << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}