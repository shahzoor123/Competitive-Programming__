#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  
  
  
  
*/

// Claims on Algo
/*
  
  
*/

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

    int totalDiff = 0;


    for(int i = 0; i <n ;i++){

        if(i == n - 1){
            totalDiff += a[i];
        }
        else if (a[i] - b[i+1] > 0){
            totalDiff += a[i] - b[i+1];
        }

    }

    cout << totalDiff << endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}