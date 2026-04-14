#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b;
        cin >> a >> b;
        int result = INT_MAX;
        
        for (int k = 0; k <= 1000; ++k) {
            int current_b = b + k;
            if (current_b == 1) continue;

            int temp_a = a;
            int steps = 0;

            while (temp_a > 0) {
                temp_a /= current_b;
                steps++;
            }

            result = min(result, steps + k);
        }

        cout << result << '\n';
    }

    return 0;
}
