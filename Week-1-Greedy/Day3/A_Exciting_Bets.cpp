#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define f(i, n) for (ll i = 0; i < n; ++i)

void solve() {
    ll a, b;
    cin >> a >> b;

    if(a == b){
        cout << 0 << " " << 0 << endl;
        return;
    }

    ll d = abs(a-b);
    ll left = a % d;
    ll right = d - a % d;
    
    cout << d << " " << min(left,right) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}