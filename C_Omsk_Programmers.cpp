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
const ll INF = (ll) 1e18;

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

    ll a, b ,x;
    cin >> a >> b >> x;

 
    ll ans = INF;
    ll ops = 0; 

    while (a != b){

        if (b > a) {
            swap(a, b);
        }
 
        ans = min(ans, abs(a-b) +  ops);
        a /= x;
        ops++;

    }

    ans = min(ans, ops);

    cout << ans << endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}