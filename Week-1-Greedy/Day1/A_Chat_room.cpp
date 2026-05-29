#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
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
    string s;
    cin >> s;

    int h = s.find('h');
    int e = s.find('e', h+1);
    int l1 = s.find('l',e+1);
    int l2 = s.find('l',l1+1);
    int o = s.find('o',l2+1);

    if(h != string::npos && e != string::npos && l1 != string::npos && l2 != string::npos && o != string::npos){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    
  
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}