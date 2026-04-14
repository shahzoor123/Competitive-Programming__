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
    getline(cin, s);
    for(int i=s.size()-1;i>=0;i--) {
        if(isalpha(s[i])) {
            char c = toupper(s[i]);
            if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='Y')
                cout<<"YES";
            else
                cout<<"NO";
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}