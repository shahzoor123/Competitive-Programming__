#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,m;
    cin >> n >> m;

    char c;
    cin >> c;

    vector<vector<char>> grid(n, vector<char>(m));
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            char x;
            cin >> x;
            grid[i][j] = x;
        }
    }

    set<char> deputies; 

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(grid[i][j] == c){

                if(i+1 < n && grid[i+1][j] != '.' && grid[i+1][j] != c){
                    deputies.insert(grid[i+1][j]);
                }
                if(i-1 >= 0 && grid[i-1][j] != '.' && grid[i-1][j] != c){
                    deputies.insert(grid[i-1][j]);
                }
                if(j+1 < m && grid[i][j+1] != '.' && grid[i][j+1] != c){
                    deputies.insert(grid[i][j+1]);
                }
                if(j-1 >= 0 && grid[i][j-1] != '.' && grid[i][j-1] != c){
                    deputies.insert(grid[i][j-1]);
                }

            }
        }
    }

    cout << deputies.size() << endl;

    

}



int main(){


  solve();        
  return 0;
}