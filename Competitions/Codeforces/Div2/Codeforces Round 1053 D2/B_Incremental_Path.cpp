#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n,m;
    cin >> n >> m;

    string s;
    cin >> s;

    set<int> a;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        a.insert(x);  
    }

    int cur = 1;
    for (auto c : s) {
        cur++;
        if(c == 'B'){
            while(a.count(cur)){
                cur++;
            }
        }
        a.insert(cur);
        if(c == 'B'){
            while(a.count(cur)){
                cur++;
            }
        }
    }
    
    cout << a.size() << endl;
    for (auto& x : a) {
        cout << x << " ";
    }
    cout << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
