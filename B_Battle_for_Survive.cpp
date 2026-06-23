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

    ll n;
    cin >> n;

    vector<ll> a(n);
    for(ll &x : a) cin >> x;


    ll secondLast = a[n-2];
    ll last = a[n-1];

    ll totalBeforeLast = 0;

    for(ll i=0;i<n-2;i++){
        totalBeforeLast += a[i];
    }

    secondLast -= totalBeforeLast;

    if(secondLast < 0){
        last += abs(secondLast);
    }
    else{
        last -= secondLast;
    }

    cout << last << endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}