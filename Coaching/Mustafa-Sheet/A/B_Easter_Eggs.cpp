#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    string result = "";
    string base = "ROYGBIV";
    string suffix = "GBIV";

    result += base;

    n -= 7;

    int i = 0;

    while(n > 0 ){

      result += suffix[i % 4];
      i++;
      n--;
    }


    cout << result << endl;
    

}



int main(){


    solve();        
  return 0;
}