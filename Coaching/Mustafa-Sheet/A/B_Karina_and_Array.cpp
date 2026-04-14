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


    vector<long long> result;
    for (int i = 0; i < n-1; i++) {
        result.push_back(a[i] * a[i+1]);
    }


    long long maxElement = *max_element(result.begin(),result.end());

    cout <<  maxElement << endl;



    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
