#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> a(n), f(n+1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        f[a[i]]++;  
    }


    int c1 = 0, c2 = f[k];
    for (int i = 0; i < k; i++) {
        if(f[i] == 0){
            c1++;
        }
    }


    cout << max(c1,c2) << endl;


    

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
