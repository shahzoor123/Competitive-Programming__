#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout<<endl

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
    map<int,int> freq;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        freq[x]++;
    } 

    int operations = 0;

    for(auto value : freq){
        int x = value.first;
        int f = value.second;
            
        if(f < x){
            operations += f;
        }
        else if (f > x){
            operations += (f - x);
        }
    } 


    cout << operations << endl;
    


   
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

