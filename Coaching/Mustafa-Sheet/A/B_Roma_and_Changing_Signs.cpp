#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }



    for (int i = 0; i < n && k > 0; i++) {
         
        if(a[i] < 0){
            a[i] = a[i] * -1;
            k--;
        }
        else{
            break;
        }
    }

    sort(a.begin(),a.end());
    if (k % 2 == 1) {
        a[0] = -a[0]; 
    }



    int maximumSum = 0;
    for (int i = 0; i < n; i++) maximumSum += a[i];

    cout << maximumSum << endl;

    
}

int main(){

    solve();        
    return 0;
}
