#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;

    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    for (int i = 0; i < n; i++) {
        int g = -1, s = -1;
        for (int j = 0; j < m; j++) {
            if(a[i][j] == 'G') g = j;
            if(a[i][j] == 'S') s = j;
           
        }
        if(g > s){
            cout << "-1" << endl;
            return;
        }
    }


    int currentRowSteps = 0;

    map<int,int> freq;
    for (int i = 0; i < n; i++) {
        int g = -1, s = -1;
        for (int j = 0; j < m; j++) {

            if(a[i][j] == 'G') g = j;
            if(a[i][j] == 'S') s = j;
        
        }

        int steps = s - g;
        freq[steps]++;
        
    }

    // for (auto x : freq) {
    //     cout << x.first << " " << x.second << endl;
    // }

    cout << freq.size() << endl;

    
}

int main(){
 
    solve();        
    return 0;
}
