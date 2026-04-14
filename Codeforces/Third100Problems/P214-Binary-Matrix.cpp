#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<string> matrix(n);
        for (int i = 0; i < n; i++) {
            cin >> matrix[i];
        }

        int rowOddCount = 0, colOddCount = 0;
        vector<int> rowXOR(n, 0), colXOR(m, 0);

        for (int i = 0; i < n; i++) {
            int xorSum = 0;
            for (int j = 0; j < m; j++) {
                xorSum ^= (matrix[i][j] - '0');
            }
            rowXOR[i] = xorSum;
            if (xorSum == 1) rowOddCount++;
        }

        
        for (int j = 0; j < m; j++) {
            int xorSum = 0;
            for (int i = 0; i < n; i++) {
                xorSum ^= (matrix[i][j] - '0');
            }
            colXOR[j] = xorSum;
            if (xorSum == 1) colOddCount++;
        }


        int ans = max(rowOddCount, colOddCount);
        cout << ans << endl;
    }

    return 0;
}
