#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    int totalWaterSections = 0;

    for (int i = 0; i < n; i++) {
        int currentSections = 1;
        
        
        for (int j=i-1; j>=0 && a[j] <= a[j+1]; j--){
            currentSections++;
        }

        for (int j=i+1; j<n && a[j] <= a[j-1]; j++){
            currentSections++;
        }


        totalWaterSections = max(totalWaterSections,currentSections);
    }

    cout << totalWaterSections << endl;

    
}

int main(){

    solve();        
    return 0;
}
