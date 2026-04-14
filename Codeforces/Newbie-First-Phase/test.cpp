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
    int N, M;
    cin >> N >> M;


    vector<pair<int,bool>> a(M,{0,false});
    for(int i=0;i<M;i++){
        a[i].first = i+1;
    }


    while(N--){
        int W;
        cin >> W;

        vector<int> wishlist(W);
        for(int i=0;i<W;i++){
            cin >> wishlist[i];
        }

        bool got = false;


        for(int i=0;i<W;i++){

            int j = wishlist[i];
            if(!a[j-1].second){
                a[j-1].second = true;  
                cout << j << endl;   
                got = true;
                break;
            } 

        }

        if(!got){
            cout << 0 << endl;
        }
        
        
    }
 
}

