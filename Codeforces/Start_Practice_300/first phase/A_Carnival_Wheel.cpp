#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  
  
  
  
*/

// Claims on Algo
/*
  
  
*/

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


void solve(){

    int l,a,b;
    cin >> l >> a >> b;

    int g = gcd(l, b);
    int steps = l / g;

    int currentPrize = a;
    int maxPrize = currentPrize;

    for (int i=1;i<steps;i++){
        cout << i << " "; 
        currentPrize = (currentPrize + b) % l;
        maxPrize = max(maxPrize,currentPrize);
    }

    cout << endl;
    
    // cout << maxPrize << endl;

   

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}