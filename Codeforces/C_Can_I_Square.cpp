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

void solve(){
    
    int n,a;
    long long int sum=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        sum+=a;
    }
    if(sqrt(sum)==(int)sqrt(sum))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}