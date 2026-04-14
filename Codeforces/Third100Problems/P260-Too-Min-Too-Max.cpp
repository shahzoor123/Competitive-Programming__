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
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    vector<int> v = {a[0], a[1], a[n-2], a[n-1]};
    int res = 0;
    sort(v.begin(), v.end());
    do {
        int val = abs(v[0] - v[1]) + abs(v[1] - v[2]) + abs(v[2] - v[3]) + abs(v[3] - v[0]);
        res = max(res, val);
    } while (next_permutation(v.begin(), v.end()));

    cout << res << '\n';


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