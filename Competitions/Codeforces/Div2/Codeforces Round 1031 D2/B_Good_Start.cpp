#include <bits/stdc++.h>
using namespace std;


void solve(){
    int w,h,a,b;
    cin >> w >> h >> a >> b;

    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    x1 = abs(x1 - x2);
    y1 = abs(y1 - y2);

    if(x1 % a == 0 && x1 >= a){
        cout << "Yes" << endl;
    }
    else if (y1 % b == 0 && y1 >= b){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
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