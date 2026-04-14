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
    for(int &x : a) cin >> x;


    
    int last = 0; 
    int watched = 0;

    f(i,n){
        if(a[i] - last > 15){
            cout << last + 15 << endl;
            return;
        }
        last = a[i];
    }

    if(90 - last >= 15){
        cout << last + 15 << endl;
    } else {
        cout << 90 << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}