#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

// Problem Statement
/*
  
*/

// Small Observations
/*
  
*/

// Claims on Algo
/*
  
*/

void solve() {
    ll a, b;
    cin >> a >> b;

    ll A = a, B = b; 
    ll layers1 = 0; ll layers2 = 0;

    ll k = 1;
    int i = 0;

    a = A; b = B;
    while (true){
        if(i % 2 == 0){
            if(a < k){
                break;
            }
            a -= k;
        }
         else { 
            if (b < k) break;
            b -= k;
        }

        layers1++;
        k *= 2;
        i++;
    }
    

    k = 1;
    i = 0;
    a = A; b = B;

    while (true){
        if(i % 2 == 0){
            if(b < k){
                break;
            }
            b -= k;
        }
         else { 
            if (a < k) break;
            a -= k;
        }

        layers2++;
        k *= 2;
        i++;
    }
    


    cout << max(layers1,layers2) << endl;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}