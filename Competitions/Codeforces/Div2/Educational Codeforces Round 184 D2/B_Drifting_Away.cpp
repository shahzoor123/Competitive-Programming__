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
    string s;
    cin >> s;

    int left = 0,right = 0 , star = 0;

    for (int i=0;i<s.size();i++){
        if(s[i] == '<'){
            left++;
        }
        else if (s[i] == '>'){
            right++;
        }
        else{
            star++;
        }
    }

    string result = string(left, '<') + string(star, '*') + string(right, '>');


    if(star > 1 || result != s){
        cout << -1 << endl;
    }
    else{
        cout << max(left+star,star+right) << endl;
    }
 

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}