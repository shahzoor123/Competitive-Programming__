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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(ll &x : a) cin >> x;
    for(ll &x : b) cin >> x;

    ll mOfa = *max_element(a.begin(),a.end());
    ll mOfb = *max_element(b.begin(),b.end());

    ll globalMax = max(mOfa,mOfb);

    ll ans = 0;

    vector<ll> a1 = a, b1 = b;
    for(ll i=0;i<n;i++){
        if(a1[i] == globalMax){
            continue;
        }
        else if(b1[i] == globalMax) {
            swap(a1[i], b1[i]);
        }
        else{
            if(a1[i] > b1[i] ){
                swap(a1[i], b1[i]);
            }
        }
    }

    
    ll sum = accumulate(b1.begin(), b1.end(), 0LL);
    ll maxOfA = *max_element(a1.begin(),a1.end());
    ans = max(ans, sum + maxOfA);
    
    vector<ll> a2 = a, b2 = b;
    for(ll i=0;i<n;i++){
        if(b2[i] == globalMax){
            continue;
        }
        else if(a2[i] == globalMax) {
            swap(a2[i], b2[i]);
        }
        else{
            if(a2[i] > b2[i]){
                swap(a2[i], b2[i]);
            }
        }
    }
    sum = accumulate(b2.begin(), b2.end(), 0LL);
    maxOfA = *max_element(a2.begin(),a2.end());
    ans = max(ans, sum + maxOfA);
    
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