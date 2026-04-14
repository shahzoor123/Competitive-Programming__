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



void solve() {
    long long a, b;
    cin >> a >> b;

    long long operations = 0;

    while (a > 0 && b > 0) {
        if (a < b) {
            operations += b / a;
            b %= a;
        } else {
            operations += a / b;
            a %= b;
        }
    }

    cout << operations << '\n';
}


int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}