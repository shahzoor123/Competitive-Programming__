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
    int n, k;
    cin >> n >> k;

    int finalPositionOfCatB;

    if(n % 2 == 0){
        int cycleLength = n;
        int basePosition = (k - 1) % cycleLength;
        finalPositionOfCatB = basePosition + 1; 
    }
    else{

        int cycleLength = n;
        int halfCycle = n/2;

        int basePosition = (k - 1) % cycleLength;
        int extraShifts = (k - 1) / halfCycle;

        finalPositionOfCatB = (basePosition + extraShifts) % cycleLength + 1;

    }

    cout << finalPositionOfCatB << endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}