#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k, int q, const vector<int>& t, const vector<pair<int, int>>& queries) {
    
    unordered_set<int> online;
    set<pair<int,int>> displayed; 

    for (int i=0;i<q;i++){
        int type = queries[i].first;
        int id = queries[i].second;

        if (type == 1){
            online.insert(id);
            displayed.insert({t[id],id});

            if((int) displayed.size() > k){
                displayed.erase(displayed.begin());
            }
        }
        else if (type == 2){
            if(online.count(id)){
                if(displayed.count({t[id],id})){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else{
                cout << "NO" << endl;
            }
        }
    }


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, q;
    cin >> n >> k >> q;
    vector<int> t(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> t[i];
    }

    vector<pair<int, int>> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i].first >> queries[i].second;
    }

    solve(n, k, q, t, queries);

    return 0;
}
