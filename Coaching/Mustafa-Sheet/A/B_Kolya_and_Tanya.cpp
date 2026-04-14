#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}


void solve(){
    long long n;
    cin >> n;

    long long total = modPow(3, 3 * n, MOD);
    long long bad = modPow(7, n, MOD);

    long long ans = (total - bad + MOD) % MOD;

    cout << ans << endl;

    

}



int main(){

  solve();        
  return 0;
}