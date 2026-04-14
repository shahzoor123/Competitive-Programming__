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

    int total_x=0, total_y=0;
    int a;

    for(int i=0; i<n; i++) {
        cin >> a;
        total_x+=a;
    }

    for(int i=0; i<n; i++) {
        cin >> a;
        total_y+=a;
    }

    if(total_y>total_x) cout << "No" << endl;
    else cout << "Yes" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}