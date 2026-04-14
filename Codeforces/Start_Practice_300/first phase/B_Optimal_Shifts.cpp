#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
  
  
*/

// Small Observations
/*
    

    1 - it was all about the max segment of zeros and the last zero distance from the 1 left to it 
    

  
  
*/

// Claims on Algo
/*

   
  
*/

void solve(){

    int n;
    cin>>n;

    string s;
    cin >> s;

    long long last;
    for (int i=n-1;i>=0;i--){
        if(s[i] == '1'){
            last = i;
            break;
        }
    }

    long long maxDistance = 0;
    long long first = -1;

    for (int i=0;i<n;i++){
        if(s[i] == '0'){
            if(first == -1){
                maxDistance = max(maxDistance,i + n - last);
            }
            else{
                maxDistance = max(maxDistance,i - first);
            }
        }else{
            first = i;
        }
        
    }


    cout << maxDistance << endl;

   
  
    

    
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
  
    return 0;
}