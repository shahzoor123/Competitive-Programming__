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
    vector<ll> a(n);
    for(ll &x : a) cin >> x;


    vector<ll> prefix, suffix(n);

    ll currentPrefixSum = 0;
    ll currentSuffixSum = 0;

    for(ll i=0;i<n;i++){
        currentPrefixSum += abs(a[i]);
        prefix.push_back(currentPrefixSum);
    }

    for(ll i=n-1;i>=0;i--){
        currentSuffixSum += a[i];
        suffix[i] = currentSuffixSum;
    }

    ll maxSum = LLONG_MIN;
    ll k = -1;


    for(ll i=0;i<n;i++){

        ll pre, suf;
        if(a[i] > 0){

            if(i > 0) pre = prefix[i-1];
            else pre = 0;
            if(i < n-1) suf = suffix[i+1];
            else suf = 0;

            ll optimal = pre - a[i] + suf;
            if(optimal > maxSum){
                maxSum = optimal;
                k = i;
            }
        }
    }

    if(suffix[0] > maxSum) {
        cout << 0 << endl;
        return;
    }

    ll totalOps = 0;
    ll flipCount = 0;

    vector<int> indexes;


    for(int i=k-1;i>=0;i--){

        if((a[i] < 0 && flipCount % 2 == 1) || (a[i] > 0 && flipCount % 2 == 0)){
            indexes.push_back(i+1);
            totalOps++;
            flipCount++;
        }
        else{
            continue;
        }


    }

    indexes.push_back(k+1);
    totalOps++;

    cout << totalOps << endl;

    for(int i=0;i<indexes.size();i++){
        cout << indexes[i] << " ";
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