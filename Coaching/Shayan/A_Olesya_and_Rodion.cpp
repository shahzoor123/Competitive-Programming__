#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,t;
    cin >> n >> t;

    
    
    if(t < 10){

        for (int i=0;i<n;i++){
           cout << t;
        }
 
    }
    else if (n > 1){

        cout << 1;
        for (int i=1;i<n;i++){
           cout << 0;
        }
    }

    if(n == 1 && t == 10){
        cout << -1 << endl;

    }
    

}



int main(){

  solve();        

  return 0;
}