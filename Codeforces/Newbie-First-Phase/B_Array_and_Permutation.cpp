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
    int n;
    cin >> n;

    vector<int> p(n), a(n);
    vector<int> v(n + 1);


    for(int i = 0; i < n; i++) {
        cin >> p[i];
        v[p[i]] = i;
    }

    for(int i = 0; i < n; i++) cin >> a[i];

    bool position = true;   
    for(int i=1;i<n;i++){
        if(v[a[i-1]] > v[a[i]]) {
            position = false;
            break;
        }
    }

    cout << (position ? "YES" : "NO") << endl;

    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}