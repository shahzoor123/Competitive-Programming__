#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,k; cin >> n >> k;

    for (int i = 1;i <= n;i++)
    {
        long long int x; cin >> x;
        cout << x + (x % (k + 1)) * k << ' ';
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
