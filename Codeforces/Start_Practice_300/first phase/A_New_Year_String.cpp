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
    int n;cin >> n;
    string s;cin >> s;

    string pattren_2 = "2026";
    string pattren_1 = "2025";


    bool present2025 = false;
    bool present2026 = false;


    for (int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            string substring = s.substr(i, j);
            if(substring == pattren_1){
                present2025 = true;
            }
            else if(substring == pattren_2){
                present2026 = true;
            }

        }
    }

    if(!present2025 || present2026){
        cout << 0 << endl;
    }
    else{
       cout << 1 << endl;
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