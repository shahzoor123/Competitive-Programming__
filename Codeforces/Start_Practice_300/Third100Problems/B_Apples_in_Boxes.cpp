#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int sum = 0;

    vector<int> a(n+1);
    for (int i=1;i<=n;i++){
        cin >> a[i];
        sum += a[i];
    } 

    sort(++a.begin(),a.end());

    if( (sum&1) && ( a[n]-a[1]<=k || (a[n]-a[1] == k+1 && a[n-1] != a[n] ))){
        cout << "Tom" << endl;
    }
    else{
        cout << "Jerry" << endl;
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
