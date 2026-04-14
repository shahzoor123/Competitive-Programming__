#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> b(7);
    for (int &x : b) cin >> x;

    vector<int> a(3);
    int n = b.size();
    int lastElement = b[n - 1]; 

    
    for(int x=0;x<n;x++){
        for(int y=x+1;y<n;y++){
            for(int z=y+1;z<n;z++){
                if(b[x] + b[y] + b[z] == lastElement){
                    cout << b[x] << " " << b[y] << " " << b[z] << "\n";
                    return; 
                }
            }
        }  
    }
 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
