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

    int operations = 0;
    
    for(int i = 0; i < (int)a.size(); i++){
        for (int j = (int)a.size() - 1; j > i; j--){
            if(i < j && a[i] > a[j]){
                a.erase(a.begin() + j);
                operations++;
            }
        }
    }

    cout << operations << endl;
        
  
    

    
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
  
    return 0;
}