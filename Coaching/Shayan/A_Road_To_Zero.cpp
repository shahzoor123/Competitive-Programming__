#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long x, y;
    cin >> x >> y;

    long long a, b;
    cin >> a >> b;

    if (x == 0 && y == 0){
        cout << 0 << endl;
        return;
    }

    long long maxInteger = max(x, y);
    long long minInteger = min(x, y);

    long long maxCost = max(a, b);
    long long minCost = min(a, b);

    long long totalCost = 0;

    long long totalMax = maxInteger - minInteger;

    totalCost = (totalMax * minCost) + (minInteger * maxCost);

    cout << totalCost << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();        
    }

    return 0;
}
