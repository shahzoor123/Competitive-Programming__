#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long a,b,x,y;
    cin >> a >> b >> x >> y;


    if(b < a - 1 || (b < a && a % 2 == 0)){
       cout << -1 << endl;
       return;
    }

    if (b == a - 1){
        cout << y << endl;
        return;
    }

    int result = 0;
    while (a != b){
        if(a % 2 == 0){
            result += min(x,y);
        }
        else{
            result += x;
        }
        a++;
    }

    cout << result << endl;


}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}