#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long a,b,m;
    cin >> a >> b >> m;

    m+1;

    if(m+1 < a && m+1 < b){
        cout << 2 << endl;
        return;
    }

    long long maxFireworks = (m/a) + (m/b);

    cout << maxFireworks + 2 << endl;


}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}