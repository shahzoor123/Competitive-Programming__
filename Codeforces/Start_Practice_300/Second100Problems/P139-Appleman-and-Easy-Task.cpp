#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;

    
    vector<string> board(n);
    for (int i = 0; i < n; ++i) {
        cin >> board[i];
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};


    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            int countO = 0;

            for (int k = 0; k < 4; ++k) {
                int x = i + dx[k];
                int y = j + dy[k];

                // Check if the adjacent cell is within bounds and contains 'o'
                if (x >= 0 && x < n && y >= 0 && y < n && board[x][y] == 'o') {
                    countO++;
                }
            }

            if (countO % 2 != 0){
               cout << "NO" << endl;
               return 0; 
            } 
            

        }
  
    }

    cout << "YES" << endl;
    return 0;



   
}

int main() {

    solve();
    

    return 0;
}
