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
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    long long x,y;

    x = a * d;
    y = b * c;

    if(x == y){
        cout << 0 << endl;
    }
    else if (x == 0 || y == 0){
        cout << 1 << endl;
    }
    else if (x % y == 0 || y % x == 0){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }


}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}