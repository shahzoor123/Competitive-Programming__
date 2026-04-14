#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin >> s;


    int rotations = 0;
    char current = 'a';

    for (char c: s){
        
        int diff = abs(current - c);
        rotations += min(diff, 26 - diff);
        current = c;
        
    }


    cout <<  rotations << endl;
    

}



int main(){


    solve();        
  

  return 0;
}