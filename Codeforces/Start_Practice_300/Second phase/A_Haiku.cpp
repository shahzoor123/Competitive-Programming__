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

    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    int x=0, y=0, z=0;
    for(auto i: a) if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')x++;
    for(auto i: b) if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')y++;
    for(auto i: c) if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')z++;

    if(x==5 && y==7 && z==5)cout << "YES";
    else cout << "NO";
   
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}