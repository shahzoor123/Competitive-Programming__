#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    set<int> prev, total;
    int totalPartitions = 0;

    for (int i=0;i<n;i++){
        total.insert(a[i]);
        if(prev.count(a[i])){
            prev.erase(a[i]);
        }
        if(prev.size() == 0){
            totalPartitions++;
            prev = total;
        }
    }

    cout <<  totalPartitions << endl;
    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
