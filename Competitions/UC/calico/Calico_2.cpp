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


double solve(int N, const vector<double>& X, const vector<double>& Y) {
    double minX = *min_element(X.begin(), X.end());
    double maxX = *max_element(X.begin(), X.end());
    double minY = *min_element(Y.begin(), Y.end());
    double maxY = *max_element(Y.begin(), Y.end());
    return (maxX - minX) * (maxY - minY);
}

void solve(){
    int N;
    cin >> N;

    vector<double> X(N), Y(N);
    for (int i = 0; i < N; ++i) {
        cin >> X[i] >> Y[i];
    }
    cout << fixed << setprecision(6) << solve(N, X, Y) << "\n";

    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}