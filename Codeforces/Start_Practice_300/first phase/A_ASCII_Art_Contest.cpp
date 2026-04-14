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

    int g, c, l;

    cin >> g >> c >> l;

   
    vector<int> v = {g, c, l};
    sort(v.begin(), v.end());

    if (v[2] - v[0] >= 10){
        cout << "check again" << endl;
    }
    else{
        cout << "final " <<  v[1] << endl;
    }
    

}

int main(){


    solve();

    return 0;
}