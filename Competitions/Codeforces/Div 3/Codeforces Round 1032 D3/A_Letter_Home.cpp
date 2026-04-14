#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    int minElement = *min_element(a.begin(), a.end());
    int maxElement = *max_element(a.begin(),a.end());

    int firstleft = abs((s - minElement)) + (maxElement - minElement);
    int firstright = abs((s - maxElement)) + (maxElement - minElement);

    cout << min(firstleft,firstright) << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
