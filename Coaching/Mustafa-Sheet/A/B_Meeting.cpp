#include <bits/stdc++.h>
using namespace std;

void solve(){
    int xa, ya, xb, yb;
    cin >>  xa >> ya >> xb >> yb;

    int n;
    cin >>  n;


    vector<tuple<int,int,int>> radiators;

    for (int i = 0; i < n; i++) {
        int x,y,r;
        cin >> x >> y >> r;
        radiators.push_back({x,y,r});

    }

    int x1 = min(xa, xb), x2 = max(xa, xb);
    int y1 = min(ya, yb), y2 = max(ya, yb);

    vector<pair<int,int>> generals;

    for (int x = x1; x <= x2; x++) {
        generals.push_back({x, y1});
        generals.push_back({x, y2});
    }

    for (int y = y1 + 1; y < y2; y++) {
        generals.push_back({x1, y}); 
        generals.push_back({x2, y}); 
    }

    int blankets = 0;
    for (auto [gx, gy] : generals) {
        bool warm = false;

        for (auto [rx, ry, r] : radiators) {
            long long dx = gx - rx;
            long long dy = gy - ry;
            if (dx*dx + dy*dy <= 1LL * r * r) {
                warm = true;
                break;
            }
        }

        if (!warm) blankets++;
    }

    cout << blankets << "\n";
    
}


int main(){
    
    solve();        
    return 0;
}
