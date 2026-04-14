#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;

    vector<pair<int,int>> containers;
    for (int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;
        containers.push_back({a, b});
    }

    sort(containers.begin(), containers.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.second > b.second; 
    });

   
    int totalMatches = 0;
    int i = 0;

    while (n > 0 && i < containers.size()){

        int takeBoxes = min(n, containers[i].first);
        totalMatches += takeBoxes * containers[i].second;

        n -= takeBoxes;
        i++;
    }

    cout << totalMatches << endl;

    
}

int main(){

    solve();        
    return 0;
}
