#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;

    string s; cin >> s;

    int cntOnes = 0; 
    bool impossible = false;
    for (char c : s) {
        if(c == '1'){
            cntOnes++;
            if(cntOnes >= k) {
                impossible = true;
            }
        } 
        else{
            cntOnes = 0;
        }
    }

    if(impossible){
        cout << "NO" << endl;
        return;
    }

    vector<int> zeros,ones;
    for(int i=0; i<n;i++){
        if(s[i] == '1') ones.push_back(i);
        else zeros.push_back(i);
    }


    vector<int> p(n);
    int cur = n;
    
    for(int idx : zeros) p[idx] = cur--;
    for(int idx : ones) p[idx] = cur--;

    cout << "YES" << endl;
    for(int i=0;i<n;i++){
        if (i) cout << " ";
        cout << p[i];
    }
    cout << endl;

}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
