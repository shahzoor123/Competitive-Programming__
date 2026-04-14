#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int a[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        int operations = 0;

        for (int size = n; size >= 1; size--) {  // Possible submatrix sizes
            for (int i = size - 1; i < n; i++) {
                for (int j = size - 1; j < n; j++) {
                    if (a[i][j] < 0) {
                        int increase = -a[i][j];
                        operations += -a[i][j]; // Count the increase needed

                        // Appliying operation is important 
                        // because this is the only way to 
                        // figure out what is happening to the other value
                        // after operations to properly considering how the magic operation 
                        // affects the diagonal elements of submatrices.
                        for (int x = i - size + 1; x <= i; x++) {
                            a[x][x - i + j] += increase;
                        }
                    }

                    
                }
            }
            
        }

        cout << operations << endl;
        
    }

    return 0;
}
