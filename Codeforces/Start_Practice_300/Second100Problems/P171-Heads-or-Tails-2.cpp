#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    vector<pair<int,int>> results;

    for (int ci=a;ci <= x; ci++){
        for (int di = b; di < min(ci, y+1); di++){
            results.push_back({ci,di});
        }
    }

    cout << results.size() << "\n";
    for (auto &p : results) cout << p.first << " " << p.second << "\n";



    
}

int main() {

    solve();

    return 0;
}
