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

    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int startRow = -1;


    for (int i = 0; i < n; i++) {
        if (a[i].find('1') != string::npos) {
            startRow = i;
            break;
        }
    }

    int nextRow = startRow + 1;

    int countFrist = 0;
    int countSecond = 0;

    for (int i = 0; i < n; i++) {
        if(a[startRow][i] == '1'){
            countFrist++;
        }

    }

    
    for (int i = 0; i < n; i++) {
        if(a[nextRow][i] == '1'){
            countSecond++;
        }  
    }

    if(nextRow == -1 || countSecond != countFrist){
        cout << "TRIANGLE" << endl;
    }
    else{
        cout << "SQUARE" << endl;
    }

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}