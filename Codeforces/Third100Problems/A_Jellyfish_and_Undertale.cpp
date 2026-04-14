#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long a,b,n;
    cin >> a >> b >> n;


    long long maxtime = b;


    for (int i=0;i<n;i++){
        long long x;
        cin >> x;
        maxtime += min(x, a-1);     
    }

    cout << maxtime << endl;


}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}