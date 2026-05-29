#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout<<endl
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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;


    int fifty = 0;
    int twentyFive = 0;

    for(int i=0;i<n;i++){
        if(a[i] == 25){
            twentyFive++;
        }
        else if (a[i] == 50){
            if(twentyFive < 1){
                cout << "NO" << endl;
                return;
            }
            twentyFive -= 1;
            fifty++;
   
        }
        else{
            if(twentyFive >= 1 && fifty >= 1 ){
                fifty -= 1;
                twentyFive -= 1;
            }
            else if(twentyFive >= 3){
                    twentyFive -= 3;
            }
            else {
                cout << "NO" << endl;
                return;
            }
         
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}