#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n; cin >> n;

    int max_r1 = 0;
    for (int i = 0; i < n; i++) {
        int r; cin >> r;
        max_r1 = max(max_r1, r);
    }

    
    int m; cin >> m;
    int max_p1 = 0;

    for (int i = 0; i < m; i++) {
        int p1; cin >> p1;
        max_p1 = max(max_p1, p1);
    }

    int k; cin >> k;
    int min_p2 = INT_MAX;

    for (int i = 0; i < k; i++) {
        int p2; cin >> p2;
        min_p2 = min(min_p2, p2);
    }
    
    int A,B; cin >> A >> B;


    double ratio = (1.0 * A/B) * min_p2;
    double r2 = sqrt((1.0 * max_p1 * max_r1 * max_r1) / (max_p1 + ratio));

    cout << fixed << setprecision(12) << r2 << endl;
    
    
}

int main(){
    
    solve();        
    return 0;
}
