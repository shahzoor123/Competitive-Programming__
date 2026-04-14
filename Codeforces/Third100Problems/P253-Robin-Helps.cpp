#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int robinGold = 0;
    int peopleHelped = 0;

    for (int i=0;i<n;i++){
        if(a[i] >= k){
            robinGold += a[i];
        }
        else if(a[i] == 0 && robinGold > 0){
            robinGold--;
            peopleHelped++;
        }
    }



    cout << peopleHelped << endl;



    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
