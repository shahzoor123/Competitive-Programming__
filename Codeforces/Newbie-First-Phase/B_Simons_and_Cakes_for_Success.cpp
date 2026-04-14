#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define f(i, n) for (ll i = 0; i < n; ++i)

// Problem Statement
/*
  
*/

// Small Observations
/*
  
*/

// Claims on Algo
/*
  
*/


vector<long long> prime_factors(long long n) {
    vector<long long> factors;

    // finding Prime Factors
    if (n % 2 == 0) {
        factors.push_back(2);
        while (n % 2 == 0) n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            factors.push_back(i);
            while (n % i == 0) n /= i;
        }
    }

    if (n > 1) factors.push_back(n);

    return factors;
}

long long construct_k(const vector<long long>& factors) {
    long long k = 1;
    for (long long p : factors) {
        k *= p; 
    }
    return k;
}


void solve() {
    int n;
    cin >> n;
    vector<long long> factors = prime_factors(n); 
    long long k = construct_k(factors);  

    cout << k << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}