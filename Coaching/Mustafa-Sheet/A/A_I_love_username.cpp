#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    int bestPerformances = 0;
    int maxScore = a[0];
    int minScore = a[0];

    for (int i=1;i<n;i++){
        if(a[i] > maxScore){
            bestPerformances++;
            maxScore = a[i];
        }
        else if (a[i] < minScore){
            bestPerformances++;
            minScore = a[i];
        }
    }

    cout << bestPerformances << endl;

    
}

int main(){

    solve();        
    return 0;
}
