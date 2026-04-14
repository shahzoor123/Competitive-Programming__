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


    vector<vector<int>> a(n, vector<int>(n));


    int val = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = val++;
        }

    }


   long long maxiumCost = 0;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            long long cost = a[i][j];

            for (int k = 0; k < 4; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];

                if (ni >= 0 && ni < n && nj >= 0 && nj < n)
                    cost += a[ni][nj];
            }

            maxiumCost = max(maxiumCost,cost);


            
        }

    }


    cout << maxiumCost << endl;


    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}