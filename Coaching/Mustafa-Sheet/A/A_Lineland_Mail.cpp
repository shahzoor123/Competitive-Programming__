#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

   

    for (int i = 0; i < n; i++) {
        int minCost, maxCost;

        if(i == 0){
            minCost = abs(a[1] - a[0]);
            maxCost = abs(a[n-1] - a[0]);
        }
        else if (i == n - 1){
            minCost = abs(a[n - 1] - a[n - 2]);
            maxCost = abs(a[n-1] - a[0]);
        }
        else{
            minCost = min(abs(a[i] - a[i-1]), abs(a[i+1] - a[i]));
            maxCost = max(abs(a[i] - a[0]), abs(a[n-1] - a[i]));
        }
       

        cout << minCost << " " << maxCost << endl;
    }



    
}

int main(){

    solve();        
   
    return 0;
}
