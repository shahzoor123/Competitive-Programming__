#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m; 

        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];  
        }

        // Top of the circle

        vector<int> boundaries(4, -1);

        bool found = false;
        for (int i = 0; i < n && !found; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '#'){
                    boundaries[0] = i + 1;
                    boundaries[1] = j + 1;
                    found = true;
                    break;
                }
            }
          
        }


        // Bottom of the circle

        bool bottomFound = false;

        // Iterate from the bottom row to the top
        for (int x = n - 1; x >= 0 && !bottomFound; x--) { 
            for (int y = 0; y < m; y++) { 
                if (grid[x][y] == '#') {
                    boundaries[2] = x + 1;
                    boundaries[3] = y + 1;
                    bottomFound = true;
                    break;
                }
            }
        }

        // cout << boundaries[0] << " " << boundaries[1] << endl << boundaries[2] << " " << boundaries[3] << endl;


        int x = (boundaries[0] + boundaries[2]) / 2;
        int y =  (boundaries[1] + boundaries[3]) / 2;

        cout << x << " " << y << endl;

       
    }

    return 0;
}
