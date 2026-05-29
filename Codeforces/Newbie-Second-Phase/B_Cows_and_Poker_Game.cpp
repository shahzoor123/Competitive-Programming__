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
    int n; cin >> n;
    string s;
    cin >> s;
    
    int countI = 0, countA = 0;
    
    for (char c : s) {
        if (c == 'I') countI++;
        else if (c == 'A') countA++;
    }
    
    int result;
    if (countI == 0) {
        result = countA;
    } else if (countI == 1) {
        result = 1;
    } else {
        result = 0;
    }
    
    cout << result << endl;
    


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}