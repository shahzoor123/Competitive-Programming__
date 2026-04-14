#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x; 

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    } 

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    int size = a.size();

    if (sum * 1.0 / size == x) { 
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl; 
    }
    
    

}


int main() {

    int t;
    cin >> t;
    
    while (t--) {
        
        solve();
       
    }

    return 0;
}
