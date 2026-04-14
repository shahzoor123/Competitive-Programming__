#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;

  
    vector<long long> ovens(n);
    for (int i = 0; i < n; ++i) {
        cin >> ovens[i];
    }
        
    sort(ovens.begin(), ovens.end());


    long long r = min<long long>((n - 1), m);
    long long k = m - r;

    long long maximumCakesCollection = 0;
    maximumCakesCollection += ovens[0] * k;

    int start = n - (int)r;
    for (int i = start; i < n; ++i) {
        long long seconds = k + (i - start + 1);
        maximumCakesCollection += ovens[i] * seconds;
    }

    cout << maximumCakesCollection << '\n';
    
    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
