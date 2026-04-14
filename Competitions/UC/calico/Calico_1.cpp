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


    if T then add to  total

  
  
*/



void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;


    long long totalCost = 0;
    long long currentDouble = 1;
    int i = 0;

    while (n > 0){

        if(s[i] == 'T'){
            totalCost += currentDouble;
            currentDouble = 1;
            
        }
        else{
            currentDouble *= 2;
        }

        i++;
        n--;
    }

    cout << totalCost << endl;
    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}