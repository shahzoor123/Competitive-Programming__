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

    int count_ones = count(s.begin(), s.end(), '1');
    int count_zero = count(s.begin(), s.end(), '0');


    if(count_zero == n){
        cout << 0 << endl;
        return;
    }

    if(count_ones % 2 == 0){
        cout << -1 << endl;
        return;
    }

    if(count_zero % 2 != 0){
        cout << -1 << endl;
        return;
    }


    int Operations = count_ones;

    cout << Operations << endl;



   



    

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}