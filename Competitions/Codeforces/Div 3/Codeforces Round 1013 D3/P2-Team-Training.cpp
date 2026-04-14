#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (long long &skill : a) cin >> skill;

    sort(a.rbegin(), a.rend()); 

    int teams = 0;
    int members = 0;
    long long min_skill = LLONG_MAX;


    for (int i=0;i<n;i++){
        members++;
        min_skill = min(min_skill, a[i]);

        if(members * min_skill >= x){
            teams++;
            members = 0;
            min_skill = LLONG_MAX;
        }   
    }


    cout << teams << endl;
    
    
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
