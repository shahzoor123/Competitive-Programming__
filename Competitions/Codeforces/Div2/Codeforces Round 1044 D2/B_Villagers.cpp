#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    priority_queue<long long> villigers;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        villigers.push(x);
    }

    long long totalEmeralds = 0;

    while (villigers.size() > 1) {
        long long currentMax = villigers.top(); villigers.pop();
        long long currentSecondMax = villigers.top(); villigers.pop();

        totalEmeralds += max(currentMax, currentSecondMax);
    }

    if (!villigers.empty()) {
        totalEmeralds += villigers.top();
        villigers.pop();
    }

    cout << totalEmeralds << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 
    return 0;
}
