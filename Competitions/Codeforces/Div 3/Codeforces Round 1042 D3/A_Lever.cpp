#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];  
    }



    int iterations = 0;

    while(true){

        bool less = false;
        
        for (int i = 0; i < n; i++) {
            if(a[i] > b[i]){
                a[i] = a[i] - 1;
                less = true;
                break;
            }
        
        }

        
        for (int i = 0; i < n; i++) {
            if(a[i] < b[i]){
                a[i] = a[i] + 1;
                break;
            }
        
        }

        iterations++;

        if(!less){
            break;
        }
    }



    cout << iterations << endl;
    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
