#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> a(n), sorted_a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
        sorted_a[i] = a[i];
    }

    sort(sorted_a.begin(), sorted_a.end());

    if(a == sorted_a){
        cout << "YES" << endl;
    }
    else if(k == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
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
