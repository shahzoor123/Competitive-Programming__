#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }


    int toNextRound = 0;

    for (int i=0;i<n;i++){
        if(a[i] && a[i] >= a[k-1]){
            toNextRound++;
        }
    }

    cout << toNextRound << endl;

    
}

int main(){

    solve();       
    return 0;
}
