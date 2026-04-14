#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    if(n % 3 == 0){
        cout << 0 << endl;
    }
    else{

        int extra = 0;
        for(int i=n ; i<= n + 2; i++){
            if(i % 3 == 0){
                extra = i - n;
                cout << extra << endl;
                break;
            }
        }

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