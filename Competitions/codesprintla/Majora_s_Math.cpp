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

void solve() {
    int h, n;
    cin >> h >> n;
    
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
    f(i,n){
        string w;
        cin >> w;

        if(w == "standard"){
            h -= a;
        }
        else if(w == "fire"){
            h -= b;
        }
        else if (w == "ice"){
            h -= c;
        }
        else{
            h -= d;
        }
       
    }

    if(h > 0){
        cout << h << endl;
    }
    else{
        cout << "dead" << endl;
    }




}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}