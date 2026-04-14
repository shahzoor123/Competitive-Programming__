#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,m;
    cin >> n >> m;

    // for (int i=0;i<n;i++){
    //   for (int j=0;j<m;j++){
    //     if((i + j) % 2 == 0){
    //         cout << "# ";
    //     }
    //     else{
    //         cout << ". ";
    //     }
   
    //   }
    //   cout << endl;
    // }


    // int evenNumber = 0;
    
    vector<vector<int>> grid(n , vector<int>(m));
    for (int i=0;i<n;i++){
      for (int j=0;j<m;j++){
          cin >> grid[i][j];
      }
    }


    int rowSum = 0;

    for (int i=0;i<n;i++){
      for (int j=0;j<m;j++){
        rowSum +=  grid[i][j];
      }
      cout << "Row " << i << " sum: " << rowSum << endl;
      rowSum = 0;
    }

    // cout << "Total Even - > " << evenNumber << endl;


    

}



int main(){

  solve();        
  return 0;
}