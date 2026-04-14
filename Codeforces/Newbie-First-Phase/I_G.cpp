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

    int total = 0;

    while (n > 1){
        if(n % 6 != 0 && n % 3 != 0){
            cout << -1 << endl;
            return;
        }

        if(n % 6 == 0){
            n /= 6;
        }
        else{
            n *= 2;
        }

        total++;
    }

    cout << total << endl;
    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}