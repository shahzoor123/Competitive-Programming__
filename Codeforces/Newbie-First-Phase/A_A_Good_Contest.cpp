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

    bool good = false;
    for(int &x : a){
        string s;
        int before, after;
        cin >> s >> before >> after;

        if(before >= 2400 && after > before) {
            good = true;
        }

    } 

    if(good) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     solve();
    return 0;
}