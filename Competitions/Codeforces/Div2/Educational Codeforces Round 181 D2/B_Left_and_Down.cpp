#include <bits/stdc++.h>
using namespace std;


long long gcd(long long a, long long b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

void solve(){
    long long a,b,k;
    cin >> a >> b >> k;

    long long val = gcd(a,b);
    long long dx = a/val;
    long long dy = b/val;

    if(dx <= k && dy <= k){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
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