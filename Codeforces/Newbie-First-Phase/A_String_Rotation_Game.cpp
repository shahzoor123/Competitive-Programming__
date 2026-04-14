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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maxBlocks = 0;
    string optimalRotation;

    for(int i = 0; i < n; i++) {
        string rotated = s.substr(i) + s.substr(0, i);

        int blocks = 1; 
        for(int j = 1; j < n; j++) {
            if(rotated[j] != rotated[j-1]) blocks++;
        }

        if(blocks > maxBlocks) {
            maxBlocks = blocks;
            optimalRotation = rotated;
        }
    }

    cout <<  maxBlocks << endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}