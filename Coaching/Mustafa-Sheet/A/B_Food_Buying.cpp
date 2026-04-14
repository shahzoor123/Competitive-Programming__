#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long s;
    cin >> s;

    long long totalBurles = 0;

    while(s >= 10){
        long long spendNow = (s/10) * 10;
        long long extraBurles = s / 10;
        totalBurles += spendNow;
        s = s - spendNow + extraBurles;
    }


    totalBurles += s;

    cout << totalBurles << endl;


}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}