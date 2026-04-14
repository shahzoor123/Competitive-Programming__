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

    vector<int> a(n);
    int cur = 0;

    for(int i=1;i<=n;i+=2){
        for (int j = i; j <= n; j *= 2){
            a[cur++] = j;
        }
  
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";

    }

    cout << endl;


}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}