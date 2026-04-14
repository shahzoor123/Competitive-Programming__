#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n), c(n);
    long long cnt=0;
    for (long long i = 0; i < n; ++i) cin >> a[i];
    for (long long i = 0; i < n; ++i) cin >> b[i];



    for (long long i=0;i<n;i++){

        c[i] = a[i] - b[i];
        
        
    }

    sort(c.begin(), c.end()); 

    if(c[0]+c[1]<0)
         cout<<"NO\n";
    else
        cout<<"YES\n";


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
