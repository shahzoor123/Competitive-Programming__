#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    map<int,vector<int>> pos;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pos[x].push_back(i+1);
    }


    vector<pair<int,int>> result;

    for (auto &p : pos) {
        int x = p.first;
        vector<int> &indices = p.second;

        if (indices.size() == 1) {
            result.push_back({x, 0});
        } else {
            int diff = indices[1] - indices[0];
            bool ok = true;
            for (int i = 2; i < (int)indices.size(); i++) {
                if (indices[i] - indices[i-1] != diff) {
                    ok = false;
                    break;
                }
            }
            if (ok) result.push_back({x, diff});
        }
    }

    cout << result.size() << "\n";
    for (auto &r : result) {
        cout << r.first << " " << r.second << "\n";
    } 
    



    
}

int main(){

    solve();        
    return 0;
}
