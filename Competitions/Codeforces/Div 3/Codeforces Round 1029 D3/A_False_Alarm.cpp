#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    int firstOpen = -1;
    for (int i=0;i<n;i++){
        if(a[i] == 1){
            firstOpen = i;
            break;
        }
    }

    int lastOpen = -1;

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 1) {
            lastOpen = i;
            break;
        }
    }

    int lengthOfLockedDoors = 0;

    for (int i=firstOpen;i<n;i++){
        if(a[i] == 1){
            lengthOfLockedDoors++;
        }
    }



    int result = lastOpen - firstOpen + 1;

    if(result <= x){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

   

    




    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
