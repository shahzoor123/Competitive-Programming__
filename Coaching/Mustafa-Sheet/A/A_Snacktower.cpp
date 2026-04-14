#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    vector<int> store(n+1 , false);
    int expected = n;         

    for (int i=0;i<n;i++){
        store[a[i]] = true;

        while(expected > 0 && store[expected]){
            cout << expected << " ";
            expected--;
        }
        
        cout << endl;
    }

   

    
}

int main(){

    solve();        
    return 0;
}
