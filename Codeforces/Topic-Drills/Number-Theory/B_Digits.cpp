#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,d;
    cin >> n >> d;

    cout << "1" << " ";

    if(d%3==0 || n>=3) cout << 3 << " ";
    if(d==5) cout << 5 << " ";
    if(d==7 || n>=3) cout << 7 << " ";
    if(d%9==0 || n>=6 || (d%3==0 && n>=3)) cout << 9 << " ";
    

    cout << endl;




    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}