#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s1,s2;
    cin >> s1 >> s2;

    int n = s1.size();

    for (int i=0;i<n;i++){
        if(s1[i] == '0' && s2[i] == '0' || s1[i] == '1' && s2[i] == '1'){
            cout << '0';
        }
        else{
            cout << '1';
        }
    }   

}



int main(){


  solve();        
  

  return 0;
}