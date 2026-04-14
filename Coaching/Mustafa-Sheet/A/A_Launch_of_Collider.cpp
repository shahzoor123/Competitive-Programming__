#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string directions;
    cin >> directions;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }
    
    int time = INT_MAX;

    for (int i = 0; i < n; i++) {
        if(directions[i] == 'R' && directions[i+1] == 'L'){
           time = min(time, (a[i+1] - a[i]) / 2);
        } 
    }

    if(time == INT_MAX){
        cout << -1 << endl;
    }
    else{
        cout << time << endl;
    }
    
}

int main(){

    solve();        
    return 0;
}
