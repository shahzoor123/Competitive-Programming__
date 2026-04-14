#include <iostream>
using namespace std;

void solve() {
    char grid[4][4];

    // Read the 4x4 grid
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> grid[i][j];
        }
    }

    // Processing logic goes here...

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            int black = 0, white = 0;


            for (int x = 0; x < 2; x++) {
                    for (int y = 0; y < 2; y++) {
                        if(grid[i + x][j + y] == '#'){
                            black++;
                        }
                        else{
                            white++;
                        }
                    }
            }


            if (black >= 3 || white>= 3){
                cout << "YES" << endl;
                return;
            }
            
        }
    }

    cout << "NO" << endl;
}

int main() {
    solve();
    return 0;
}
