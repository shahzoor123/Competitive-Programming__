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
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    vector<int> sides = {a, b, c, d};
    sort(sides.begin(), sides.end());

    if (sides[0] == sides[1] && sides[1] == sides[2] && sides[2] == sides[3]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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