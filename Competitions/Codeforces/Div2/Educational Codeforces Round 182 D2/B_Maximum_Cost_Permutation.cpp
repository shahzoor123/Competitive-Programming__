#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(i+1);
    }

    vector<int> v(n);
    for(auto &x : v){
        cin >> x;
        if(x){
            s.erase(x);
        }
    }

    // S holds al the missing values (all elements which do not appear in V)


    for(auto &x : v){
        if(!x){
            auto it = s.end(); it--;
            x = *it; // filling the 0' s in deceding order
            s.erase(it);
        }
    }


    // finding the range of subsegment which is not sorted 
    int l = n+1, r = n;
    for(int i=0;i<n;i++){
        if(v[i] != i+1){
            r = i;
            l = min(l,i);
        }
    }



    cout << (r-l+1) << endl;
    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
