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
    int n,m,d;
    cin >> n >> m >> d;

    int towers = 1;

    int currentBoxes = 0;

    while(n > 0){

        if((currentBoxes * m) > d){
            towers++;
            currentBoxes = 0;
        }

        currentBoxes++;
        n--;
    }


    cout << towers << endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}