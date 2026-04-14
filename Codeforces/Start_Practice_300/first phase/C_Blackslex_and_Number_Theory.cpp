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
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];


    for(int i=0;i<n;i++){
        cout << a[i] % 6 << " ";
    }
        
    cout << endl;
    
  
    

    
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
  
    return 0;
}