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
    int k;
    cin >> k;

    int maxPress = 2  * k;

    map<char, int> freq;

    for(int i = 0; i < 4; i++){
        string s;
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            if(s[j] != '.'){
                freq[s[j]]++;   // FIXED
            }
        }
    }

    for(auto x : freq){
        if(x.second > maxPress){
            cout << "NO" << endl;
            return;
        }

    }


    cout << "YES" << endl;

    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}