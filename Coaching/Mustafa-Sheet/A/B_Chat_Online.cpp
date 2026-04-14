#include <bits/stdc++.h>
using namespace std;

void solve(){
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    // for Z times
    set<int> Z;
    for (int i = 0; i < p; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            Z.insert(j);
        } 
    }

    // for X times
    vector<pair<int, int>> X;
    for (int i = 0; i < q; i++) {
        int c, d;
        cin >> c >> d;
        X.push_back({c, d});
    }

    int totalOnlineTimes = 0;

    for (int t = l; t <= r; t++) {
        set<int> shiftedX;
        for (auto [c, d] : X) {
            for (int j = c + t; j <= d + t; j++) {
                shiftedX.insert(j);
            }
        }

        bool overlap = false;
        for (int x : shiftedX) {
            if (Z.count(x)) {
                overlap = true;
                break;
            }
        }

        if (overlap) {
            totalOnlineTimes++;
        }
    }

    cout << totalOnlineTimes << endl;
}

int main(){


    solve();       
    return 0;
}
