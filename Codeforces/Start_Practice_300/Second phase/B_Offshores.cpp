#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout<<endl
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
    int n,x,y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for(int &x : a) cin >> x;



    ll totaladdition = 0;
    for (int i = 0; i < n; i++) {
        totaladdition += (a[i] / x) * y;
    }

    ll MaxRubbles = 0;

    for (int i = 0; i < n; i++) {
        ll cur = a[i] + (totaladdition - (a[i] / x) * y);
        MaxRubbles = max(MaxRubbles, cur);
    }



    cout << MaxRubbles << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}