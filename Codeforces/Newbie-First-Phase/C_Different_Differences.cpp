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
    int k, n;
    cin >> k >> n;


    int current = 1;

    for(int i = 1; i < k;i++){
        cout << current << " ";

        if(n-(current+k) > 0)
            current += i;
        else
            current++;  

    }

    cout << n <<  endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}