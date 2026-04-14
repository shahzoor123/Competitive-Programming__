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

    vector<vector<int>> grid(n, vector<int>(n));
    map<int,int> freq;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            grid[i][j] = x;
            freq[x]++;
        }
    }


    int scale = n * n - n * 1;

    for(auto z : freq){
        if(z.second > scale){
            cout << "NO" << endl;
            return;
        }
    
    }

    cout << "YES" << endl;


}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}