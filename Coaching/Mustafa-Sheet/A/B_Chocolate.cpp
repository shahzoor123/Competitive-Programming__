#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    vector<int> pos;
    for (int i = 0; i < n; i++) {
        if(a[i] == 1) pos.push_back(i);
    }

    if(pos.empty()){
        cout << 0 << endl;
        return;
    }

    if(pos.size() == 1){
        cout << 1 << endl;
        return;
    }

    long long ans = 1;
    for (int i = 1; i < (int)pos.size(); i++) {
        ans *= (pos[i] - pos[i-1]);  
    }

    cout << ans << endl;


    

    
}

int main(){


    solve();        
    return 0;
}
