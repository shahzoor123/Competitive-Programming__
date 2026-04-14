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

    int n,q,x;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);

    cin>>q;
    while(q--)
    {
        cin>>x;
        cout<<upper_bound(a,a+n,x)-a<<endl;
    }

   

    

    
}

int main(){

    solve();
    return 0;
}