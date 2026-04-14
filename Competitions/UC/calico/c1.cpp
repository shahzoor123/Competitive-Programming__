#include <bits/stdc++.h>
using namespace std;

// Problem Statement
/*
  
  
*/

// Small Observations
/*
  
  1 - problem have lots of edge cases we have to check for all of them 

  2 - the derise output is based on the last number in the game
  
  
*/

// Claims on Algo
/*
  
  
*/



bool isTheGivenInputisNumber(const string &s) {
    if (s.empty()) return false;

    int start;
    if (s[0] == '-') {
        start = 1;
    } else {
        start = 0;
    }

    for (int i = start; i < (int)s.size(); i++) {
        if (!isdigit(s[i])) return false;
    }
    return true;
}




void solve(){
    string w1;
    cin >> w1;

    string w2;
    cin >> w2;

    int last = -1;



    if (isTheGivenInputisNumber(w2)) {
        last = stoi(w2);
    } else if (isTheGivenInputisNumber(w1)) {
        int n1 = stoi(w1);
        int n2 = n1 + 1;

        if (w2 == "bizz" && n2 % 3 == 0 && n2 % 5 != 0) last = n2;
        else if (w2 == "fuzz" && n2 % 5 == 0 && n2 % 3 != 0) last = n2;
        else if (w2 == "bizzfuzz" && n2 % 15 == 0) last = n2;
        else if (w2 == to_string(n2)) last = n2;
        else {
            cout << "crap" << endl; 
            return;
        }
    }
    else {
       
        cout << "crap" << endl;
        return;
    }

    
    int next = last + 1;


    if (next % 15 == 0) cout << "bizzfuzz" << endl;
    else if (next % 3 == 0) cout << "bizz" << endl;
    else if (next % 5 == 0) cout << "fuzz" << endl;
    else cout << next  << endl;


}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}