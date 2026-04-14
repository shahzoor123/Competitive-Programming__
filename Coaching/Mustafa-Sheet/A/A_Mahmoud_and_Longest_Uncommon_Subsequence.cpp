#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s1,s2;
    cin >> s1 >> s2;

    long long maxString = max(s1.size(),s2.size());


    if(s1 == s2){
        cout << -1 << endl;
    }
    else{
        cout << maxString << endl;
    }

    

}



int main(){

  solve();       
  return 0;

}
