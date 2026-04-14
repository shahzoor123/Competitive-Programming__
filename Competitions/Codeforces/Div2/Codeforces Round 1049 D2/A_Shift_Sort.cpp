#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    string t = s;
    sort(t.begin(), t.end());

    if(s == t){
        cout << 0 << endl;
        return;
    }
    
    int cnt = 0;
    for (int i=0; i<n; i++){
        if(s[i] == '0' &&  t[i] == '1'){
            cnt++;
            
        }
    }

    cout << cnt << endl;

 
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
