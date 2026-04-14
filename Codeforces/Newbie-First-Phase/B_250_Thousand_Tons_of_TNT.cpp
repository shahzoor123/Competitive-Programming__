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

    sort(a.begin(),a.end());

    cout << a[n-1]-a[0] << endl;

}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}