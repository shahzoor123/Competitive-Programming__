#include <bits/stdc++.h>
using namespace std;




void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    sort(a.begin(),a.end());


    int sum = 0;

    for (int i=0;i<n;i++){
        sum += a[i];
    }


    int totalCoins = 0;
    int currentSum = 0;



    for (int i=n-1;i>=0;i--){
        currentSum += a[i];
        totalCoins++;
        if(sum - currentSum < currentSum){
            break;
        }
    }

    cout << totalCoins << endl;

    
}

int main(){

    solve();        
    return 0;
}
