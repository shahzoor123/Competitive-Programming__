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

    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i/2+(n+1)/2<<" ";
        } 
        else{
            cout<<(n+1)/2-(i-1)/2<<" ";
        }
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