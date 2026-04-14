#include <iostream>
#include <vector>

using namespace std;

/**
 * Return the shape displayed by the picture represented by G of dimensions N x M
 *
 * S: a string representing an ASCII picture
 * N: integer for number of rows
 * M: integer for number of columns
 */



string solve(int N, int M, vector<string> G) {
    // Step 1: Find bounding box
    int minRow = N, maxRow = -1, minCol = M, maxCol = -1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (G[i][j] == '#') {
                minRow = min(minRow, i);
                maxRow = max(maxRow, i);
                minCol = min(minCol, j);
                maxCol = max(maxCol, j);
            }
        }
    }

    // No '#' found, invalid shape
    if (minRow == N) return "Invalid";

    // Step 2: Check for Rectangle
    bool isRectangle = true;
    for (int i = minRow; i <= maxRow; i++) {
        for (int j = minCol; j <= maxCol; j++) {
            if (G[i][j] != '#') {
                isRectangle = false;
                break;
            }
        }
        if (!isRectangle) break;
    }
    if (isRectangle) return "ferb";

    // Step 3: Check for Triangle
    bool isTriangle = true;
    int start = minCol, end = maxCol; // Start and end indices for '#' in each row
    for (int i = minRow; i <= maxRow; i++) {
        for (int j = minCol; j <= maxCol; j++) {
            if (j >= start && j <= end) {
                if (G[i][j] != '#') {
                    isTriangle = false;
                    break;
                }
            } else {
                if (G[i][j] == '#') {
                    isTriangle = false;
                    break;
                }
            }
        }
        if (!isTriangle) break;

        // Update start and end for the next row to match a triangle
        start++;
        end--;
        if (start > end) break; // End of triangle pattern
    }
    if (isTriangle) return "phineas";

    // Step 4: Invalid Shape
    return "phineas";
}



int main() {
    int T;
    cin >> T;
    for (int c = 0; c < T; c++) {
        int N, M;
        cin >> N >> M;
        vector<string> G(N);
        for (int i = 0; i < N; i++) {
            cin >> G[i];
        }
        cout << solve(N, M, G) << '\n';
    }
}