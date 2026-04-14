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
        
        if(a[i] == 0){
            cout << 0 << endl;
            return;
        }
           
    }

    int minPositive = INT_MAX;
    int minNegative = INT_MIN;
    bool hasPositive = false, hasNegative = false;

    for (int i = 0; i < n; i++) {
        
        if(a[i] > 0){
            hasPositive = true;
            minPositive = min(minPositive, a[i]);
        }
        else if(a[i] < 0){
            if(!hasNegative || a[i] > minNegative){
                hasNegative = true;
                minNegative = a[i];
            }
        }
    }

    if(hasNegative && hasPositive){
        cout << min(abs(minNegative),abs(minPositive)) << endl;
    }
    else if(hasNegative){
        cout << abs(minNegative) << endl;
    }
    else{
        cout << abs(minPositive) << endl;
    }
    
}

int main(){


   
    solve();        
    

    return 0;
}
