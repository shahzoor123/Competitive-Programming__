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
    ll n,m,h,s;
    cin >> n >> m >> h >> s;

    vector<ll> a(n), b(m);
    for(ll &x : a) cin >> x;
    for(ll &x : b) cin >> x;

  
  

 

    
    // for A

    int uncrossableGapsA = 0;

    if(a[0] - 0 > s){
        uncrossableGapsA++;
    }

    int jumpHeightA = 0; 

    if(n==0) { 
        uncrossableGapsA = (h <= s) ? 0 : 1; 
    } else {
        if(a[0] > s) uncrossableGapsA++;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i] > s){
                uncrossableGapsA++;
                jumpHeightA = a[i];
            }
        }
        if(h - a[n-1] > s) uncrossableGapsA++;
    }


     // form B

    int uncrossableGapsB = 0;

    int jumpHeightB = 0; 

    if(b[0] - 0 > s){
        uncrossableGapsB++;
    }

    for(int i=0;i<m-1;i++){
        if (b[i+1] - b[i] > s ){
            uncrossableGapsB++;
            jumpHeightB = b[i];
        }
    }

    if (h - b[m-1] > s){
        uncrossableGapsB++;
    }


    if (uncrossableGapsA == 0 && uncrossableGapsB == 0) {
        cout << "YES" << endl;
        return;
    }

    if (uncrossableGapsA == 1 && uncrossableGapsB == 0) {
        cout << "YES" << endl;
        return;
    }


    if (uncrossableGapsA == 0 && uncrossableGapsB == 1) {
        cout << "YES" << endl;
        return;
    }

    if (uncrossableGapsA == 1 && uncrossableGapsB == 1) {
        if (jumpHeightA > 0 || jumpHeightB > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }
    cout << "NO" << endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}