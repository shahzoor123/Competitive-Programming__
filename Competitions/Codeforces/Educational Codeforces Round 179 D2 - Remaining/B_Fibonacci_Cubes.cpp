#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    vector<long long> fib(n);
    fib[0] = 1;
    if (n > 1) fib[1] = 2;
    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    string result = "";

    for (int i = 0; i < m; ++i) {
        long long w, l, h;
        cin >> w >> l >> h;

        vector<long long> box = {w, l, h};
        sort(box.begin(), box.end());
        
        bool can_fit = true;
        long long current_height = 0;
        long long base_w = box[0], base_l = box[1];  // Available base dimensions

        // Try to place cubes from largest to smallest
        for (int j = n - 1; j >= 0; --j) {
            long long cube_side = fib[j];
            
            // Check if cube fits in available base area
            if (cube_side > base_w || cube_side > base_l) {
                can_fit = false;
                break;
            }
            
            // Check if there's enough height
            if (current_height + cube_side > box[2]) {
                can_fit = false;
                break;
            }
            
            // Place the cube - update height and reduce base area
            current_height += cube_side;
            base_w = min(base_w, cube_side);
            base_l = min(base_l, cube_side);
        }

        result += (can_fit ? '1' : '0');
    }

    cout << result << endl;
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}