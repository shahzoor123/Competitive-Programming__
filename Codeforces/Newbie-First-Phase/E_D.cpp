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

    int chest = 0 ,bicep = 0 , back = 0;

    for (int i = 0; i < n; i++) {
        if(i % 3 == 0){
            chest += a[i];
        }
        else if (i % 3 == 1){
            bicep += a[i];
        }
        else{
            back += a[i];
        }
    }


    if (chest > bicep && chest > back) {
        cout << "chest";
    }
    else if (bicep > chest && bicep > back) {
        cout << "biceps";
    }
    else {
        cout << "back";
    }




    
}

int main(){

    solve();
    

    return 0;
}