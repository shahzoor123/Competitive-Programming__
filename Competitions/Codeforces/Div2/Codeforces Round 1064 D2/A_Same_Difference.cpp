#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  

    // if border charartoe are same then cout  the count of non border charractore 
    // else cout the ciount of the converting to the last charator 
  
  
  
*/

// Claims on Algo
/*
  
  
*/

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    char first = s[0];
    char last = s[n-1];


    if(first == last){
        int count = 0;

        for (int i=0;i<n-1;i++){
            if(s[i] != first) count++;
        }

        cout << count << endl;
    }
    else{

        int count = 0;
        for (char c : s) {
            if (c != last) count++;
        }
        cout << count << endl;;
    }





    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}