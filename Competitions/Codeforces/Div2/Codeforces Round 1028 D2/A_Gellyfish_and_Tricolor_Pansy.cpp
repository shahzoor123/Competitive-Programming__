#include <bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    long long flowermin = min(b,d);
    long long gellyFishMin = min(a,c);

    if (gellyFishMin >= flowermin){
        cout << "Gellyfish" << endl; 
    }
    else{
        cout << "Flower" << endl;
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