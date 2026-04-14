#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> a(5, vector<int>(5));

    int oneRow,oneCol;

    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            cin >> a[i][j];
            if(a[i][j] == 1){
                oneRow = i+1;
                oneCol = j+1;
            }
        }
          
    }

    int moves = abs(oneRow - 3) + abs(oneCol - 3);

    cout << moves <<  endl;
        






    return 0;
}
