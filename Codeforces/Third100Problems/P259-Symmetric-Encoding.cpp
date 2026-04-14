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
    int n;
    cin >> n;
    string b;
    cin >> b;

    string r = "";

    f(i,n){
        if(r.find(b[i]) == string::npos){
            r += b[i];
        }

    }

    sort(r.begin(), r.end());


    // Create the mapping from character to its symmetric character
    unordered_map<char, char> charMap;
    int m = r.size();
    f(i, m) {
        charMap[r[i]] = r[m - 1 - i];
    }

    string decodedString = "";

    f(i, n) {
        decodedString += charMap[b[i]];
    }

    cout << decodedString << endl;




    
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