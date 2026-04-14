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
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];   
    } 

    map<int, string> mp;
    for (int x : a) {
        mp[x] = "white";
    }

    string current = "red";
    for (int i = 0; i < n; i++) {
        mp[a[i]] = current;
        if (current == "red")
            current = "blue";
        else
            current = "red";
    }

    string previousColor = "";
    bool ok = true;

    for (auto it : mp) {
        if (!previousColor.empty() && it.second == previousColor) {
            ok = false;
            break;
        }
        previousColor = it.second;
    }

    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}