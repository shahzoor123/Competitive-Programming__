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
    int n,s,x;
    cin >> n >> s >> x;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    int currentSum = 0;

    f(i, n){
        currentSum += a[i];
    }

    if(s >= currentSum && (s - currentSum) % x == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
   


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}