#include <bits/stdc++.h>
using namespace std;


void solve(){
    int k,a,b,x,y;
    cin >> k >> a >> b >> x >> y;

    if(x>y){
        swap(x,y);
        swap(a,b);
    }

    long long diffa = k - a;
    long long ans  = 0;

    if(diffa >= 0){
        ans = diffa/x + 1;
        k -= x * ans;
    }


    diffa = k - b;

    if(diffa >= 0){
        ans += diffa/y + 1;
    }

    cout << ans << endl;


    

    

    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}