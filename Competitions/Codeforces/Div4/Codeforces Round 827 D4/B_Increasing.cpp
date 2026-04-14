#include <bits/stdc++.h>
using namespace std;





void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    set<int> unique;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
        unique.insert(a[i]);
    }

    
    if(unique.size() == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


   

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
