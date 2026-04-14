#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    int minElement = *min_element(a.begin(),a.end());
    int maxElement = *max_element(a.begin(),a.end());


    int maxIndex = -1;
    int minIndex = -1;

    for (int i=0;i<n;i++){
        if(a[i] == maxElement && maxIndex == -1){
            maxIndex = i;
        }

        if(a[i] == minElement){
            minIndex = i;
        }
     
    }



    int totalSec = maxIndex + (n - 1 - minIndex);

    if(maxIndex > minIndex){
        totalSec--;
    }

    cout << totalSec << endl;

    
}

int main(){

    solve();        
    return 0;
}
