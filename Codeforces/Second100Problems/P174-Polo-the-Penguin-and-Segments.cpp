#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;  

    vector<pair<int, int>> segments;

    int total_count = 0;  

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        segments.push_back({l, r});
        total_count += (r - l + 1); 
    }

    if (total_count % k == 0) {
        cout << 0 << endl;
        return 0;
    }

    int remainder = total_count % k;  
    int min_moves = k - remainder; 

    cout << min_moves << endl;


    return 0;
}
