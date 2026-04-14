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
    string x;
    cin >> x;

    vector<int> digits;
    int totalsum = 0;
    for(char c : x){
        int d = c - '0';
        digits.push_back(d);
        totalsum += d;
    }


    if(totalsum <= 9){
        cout << 0 << endl;
        return;
    }


    int D = totalsum - 9;

    vector<int> diff;
    for(int i=0;i<digits.size();i++){
        if(i == 0){
            diff.push_back(digits[i] - 1);
        }
        else{
            diff.push_back(digits[i]);
        }
    }

    sort(diff.rbegin(),diff.rend());

    int moves = 0;
    for(int c : diff){
        D -= c;
        moves++;
        if (D <= 0) break;
    }

    cout << moves << endl;


   
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}