#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    unordered_map<long long,long long> pos;

    for (long long i = 0; i < n; i++) {
        cin >> a[i];  
        pos[a[i]] = i+1;
    }

    long long m;
    cin >> m;

    vector<long long> b(m);
    for (long long i = 0; i < m; i++) {
        cin >> b[i];  
    }


    long long VasyaApproach = 0;
    long long PetyaApproach = 0;

    for (long long i=0;i<m;i++){
        long long idx = pos[b[i]];
        VasyaApproach += idx;
        PetyaApproach += n - idx + 1;
        
    }


    cout << VasyaApproach << " " << PetyaApproach << endl;

    
}

int main(){
  
    solve();        
    return 0;
}
