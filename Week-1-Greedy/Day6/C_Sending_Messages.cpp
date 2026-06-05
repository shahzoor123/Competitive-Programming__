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

    ll n,f,a,b;
    cin >> n >> f >> a >> b;

    vector<ll> z(n);
    for(ll &x : z) cin >> x;

    for(ll i=0;i<n;i++){


        ll prev = (i == 0) ? 0 : z[i-1];
        ll curr = z[i];

        ll cost = min((curr-prev)*a,b);
       

        if(f <= cost){
            cout << "NO" << endl;
            return;
        }

        f-= cost;
    }


    cout << "YES" << endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}