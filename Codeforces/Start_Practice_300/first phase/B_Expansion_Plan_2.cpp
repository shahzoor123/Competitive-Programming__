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
    int n,x,y;
    cin >> n >> x >> y;

    string s;
    cin >> s;

    ll a = 0, b = 0;

    for (int i=0;i<n;i++){
        if(s[i] == '4'){
            b++;
            a++;
        }
        else{
            b += 2;
            a++;
        }
    }
    
    x = abs(x);
    y = abs(y);

    if(x + y <= b && x <= a && y <= a){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}


