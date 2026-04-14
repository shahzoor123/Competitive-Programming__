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
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];


    int zero = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            zero++;
        }
    }

    if(zero == 0) cout << "Alice" << endl;

    else if(a[0] == 0 && a[n-1] == 0) {
        cout << "Bob" << endl;
    }

    else{
        cout << "Alice" << endl; 
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}