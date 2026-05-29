#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define f(i, n) for (ll i = 0; i < n; ++i)

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
    int x;
    cin >> x;

    if(x > 45){
        cout << -1 << endl;
        return;
    }

    vector<int> store;


    int remaining = x;

    for(int i=9;i>0;i--){
        if(i<=remaining){
            store.push_back(i);
            remaining -= i;
        }
    }

    sort(store.begin(),store.end());

    for(int i=0;i<store.size();i++){
        cout << store[i];
    }

    cout << endl;

    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}