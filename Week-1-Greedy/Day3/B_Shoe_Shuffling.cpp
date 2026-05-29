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

    map<int, vector<int>> groups;
    for(ll i = 0; i < n; ++i) {
        int x;
        cin >> x;
        groups[x].push_back(i);
    }

    for (auto& p : groups){
        if(p.second.size() < 2){
            cout << -1 << endl;
            return;
        }
    }

    vector<int>  ans(n);

    for (auto& p : groups){
        for (int i = 0; i < p.second.size(); i++) {
            ans[p.second[i]] = p.second[(i+1) % p.second.size()];
        }
    }

    f(i,n){
        cout << ans[i]+1 << " ";
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