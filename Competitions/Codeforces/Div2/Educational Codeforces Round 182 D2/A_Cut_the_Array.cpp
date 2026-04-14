#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int sum = 0;

    vector<int> a(n);
    for (auto &x : a) {
        cin >> x;
        sum += x;

    }

    for (int i = 1; i < n-1; i++) {
        int s1 = 0;
        for (int j = 0; j < i; j++) {
            s1 += a[j];
        } 
        int s2  = 0;
        for (int h = i; h < n; h++) {
            s2 += a[h];
            if((s1%3) == (s2%3) && (s2%3) == ((sum-s1-s2)%3)){
                cout << i << " " << h + 1 << endl;
                return;
            }
            if((s1%3) != (s2%3) && (s2%3) != ((sum-s1-s2)%3) && (s1%3) != ((sum-s1-s2)%3)){
                cout << i << " " << h + 1 << endl;
                return;
            }
        
        }
    }

    cout << 0 << " " << 0 << endl;



    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
