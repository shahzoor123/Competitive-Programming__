// utils.h
#ifndef UTILS_H
#define UTILS_H

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
    ll a[n];     \
    f(i, n) cin >> a[i]
#define iv(v, n)     \
    vector<ll> v(n); \
    f(i, n) cin >> v[i]
#define yes cout << "YES\n"
#define no cout << "NO\n"

#endif


void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> cards(n, vector<int>(m));
    f(i,n) {
        f (j,m) {
            cin >> cards[i][j];
        }
    }

    f(i,n) {
        sort(cards[i].begin(),cards[i].end());
    }

    vector<ll> p(n);

    f(i,n) {
        p[i] = i+1;
    }


    for(int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if(cards[i][0] > cards[j][0]){
                swap(cards[i], cards[j]);
                swap(p[i], p[j]);
            }
        }
    }

    f (j,m){
        f(i,n){
            if(cards[i][j] != j * n + i){
                cout << -1 << endl;
                return;
            }
        }
    }


    f(i,n) {
        cout << p[i] << ' ';
    }
    cout << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
