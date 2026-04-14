#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,m;
    cin >> n >> m;

    // for (int i=0;i<n;i++){
    //   for (int j=0;j<m;j++){
    //     cout << '*';
    //   }
    //   cout << endl;
    // }

    vector<vector<int>> grid(n , vector<int>(m));
    for (int i=0;i<n;i++){
      for (int j=0;j<m;j++){
          cin >> grid[i][j];
      }
    }


    int sum = 0;

    for (int i=0;i<n;i++){
      for (int j=0;j<m;j++){
          cout << grid[i][j] << " ";
          sum += grid[i][j];
        
      }
      cout << endl;
    }

    cout << "Total Sum - > " << sum << endl;


    

}



int main(){

  solve();        
  return 0;
}