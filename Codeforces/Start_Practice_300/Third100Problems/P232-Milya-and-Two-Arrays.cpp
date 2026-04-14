#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> a,b;

    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        a.insert(x);
    }

    for (int i=0;i<n;i++){
        int y;
        cin >> y;
        b.insert(y);
    }


    
    if(a.size() * b.size() >= 3){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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
