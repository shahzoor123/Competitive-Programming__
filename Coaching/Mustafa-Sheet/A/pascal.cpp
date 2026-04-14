#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    vector<vector<int>> triangle;



    for (int i=1;i<=n;i++){
        vector<int> row(i,1);
        for (int j=1;j<i-1;j++){
            row[j] = triangle[i - 2][j - 1] + triangle[i - 2][j];
        }

        triangle.pushe_back(row);
    }
    

    return triangle;

}



int main(){


    solve();        


  return 0;
}