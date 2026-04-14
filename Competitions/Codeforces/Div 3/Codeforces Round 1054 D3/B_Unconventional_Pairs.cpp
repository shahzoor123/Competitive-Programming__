#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }


    sort(a.begin(),a.end());

    long long minMaxDifference = 0;

    for (int i=0; i<n; i += 2){
        long long diff = abs(a[i+1] - a[i]);

        minMaxDifference = max(minMaxDifference,diff);
    }

    cout << minMaxDifference << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
