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

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

void solve(){

    int n;
    cin >> n;

    int m = 0;

    for (int m=1;m<=1000;m++){
        int val = n*m+1;
        if(!isPrime(val)){
            cout << m << endl;
            break;
        }
    }

   

}

int main(){


    solve();
    return 0;
}