#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b; // Inputs for each test case
        
        // Calculate the minimum cost
        int cost = (n / 2) * min(2 * a, b) + (n % 2) * a;
        
        cout << cost << endl;
    }
    
    return 0;
}
