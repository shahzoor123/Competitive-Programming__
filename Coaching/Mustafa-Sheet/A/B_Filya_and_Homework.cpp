#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    set<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);  
    }

    if(a.size() == 1 || a.size() == 2){
        cout << "YES" << endl;
    }
    else if (a.size() == 3){
        vector<int> v(a.begin(), a.end());
        if(v[1] - v[0] == v[2] - v[1]){
            cout << "YES" << endl; 
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    
}

int main(){

    solve();        
    return 0;
}
