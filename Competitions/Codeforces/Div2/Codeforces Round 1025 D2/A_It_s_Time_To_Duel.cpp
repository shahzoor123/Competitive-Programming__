#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    if(n == 2 && a[0] == 1 && a[1] == 1){
        cout << "YES" << endl;
        return;
    }

    int winners = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            winners++;
        }
    }
    
    if (winners > n - 1) {
        cout << "YES" << endl;
        return;
    }


    bool flag = false;
    for (int i = 0; i < n - 1; i++) {
        if((a[i] == 0 && a[i+1] == 0)){
            flag = true;
        }
    }

    if(flag){
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
