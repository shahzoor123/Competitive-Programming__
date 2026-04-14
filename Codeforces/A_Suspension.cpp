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



void solve(){
    int n;
    cin >> n;

    int y,r;
    cin >> y >> r;

    int result = 0;

    result += r;

    int remaining = n - result;

    while(y >= 2 && remaining > 0){
        y-= 2;
        remaining--;
        result++;
    }

    cout << result << endl;
    
}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}