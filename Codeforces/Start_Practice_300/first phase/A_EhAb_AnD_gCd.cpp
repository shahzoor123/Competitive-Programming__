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

    int x;
    cin >> x;

    cout << 1 << " " << x-1 << endl;


   

}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}