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

bool isPerfectSquare(long long n) {
    if (n < 0) return false;
    long long r = sqrt(n);
    return r * r == n;
}

const int MAX = 1e6;
vector<bool> isPrime(MAX + 1, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                isPrime[j] = false;
        }
    }
}

void solve(){

    long long n;
    cin >> n;

    sieve();   

    for(int i=0;i<n;i++){
        long long x;    
        cin >> x;

        if(!isPerfectSquare(x)){
            cout << "NO\n";
            continue;  
        }
        
        long long r = sqrt(x);
        if (r <= MAX && isPrime[r])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main(){
    solve();
    return 0;
}
