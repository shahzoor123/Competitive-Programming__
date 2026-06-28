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

template <typename T>
void prnt(const T &val) {
    if (std::is_arithmetic<T>::value || std::is_same<T, string>::value) {
        cout << val << '\n';
    } else {
        for (const auto &x : val)
            cout << x << ' ';
        cout << '\n';
    }
}

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

    int n,m;
    cin >> n >> m;

    vector<int> a(n*m);
    for(int &x : a) cin >> x;

    sort(a.begin(),a.end());

    ll MAX = a[n*m-1];
    ll MIN = a[0];
    ll SMIN = a[1];
    ll SMAX = a[n*m-2];

    

    ll ans = max(n*(m-1), (n-1)*m) * (MAX - MIN) + (min(n,m) - 1) * max(SMAX - MIN, MAX - SMIN);

    cout << ans <<  endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}