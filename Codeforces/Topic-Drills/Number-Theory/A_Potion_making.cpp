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
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}



void solve(){
    int k;
    cin >> k;

    int totalProtions = 100;

    int essence = k;
    int water = 100 - k;

    int g = gcd(essence,water);

    int total = essence/g + water/g;


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