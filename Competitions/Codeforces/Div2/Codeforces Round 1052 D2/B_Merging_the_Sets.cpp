#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        map<int, vector<int>> num_appears;
        for (int i = 0; i < n; i++) {
            int li; cin >> li;
            for (int j = 0; j < li; j++) {
                int x; cin >> x;
                num_appears[x].push_back(i);
            }
        }

        
        bool all = true;
        set<int> unique_sets;
        for (int x = 1; x <= m; x++) {
           
           if(num_appears[x].size() == 1){
                unique_sets.insert(num_appears[x][0]);
           }
           if(!num_appears[x].size()){
                all = false;
           }
        }

        int opt = n - unique_sets.size();
        if(all && opt >= 2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
