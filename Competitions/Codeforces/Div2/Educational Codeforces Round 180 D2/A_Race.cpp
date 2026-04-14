#include <bits/stdc++.h>
using namespace std;


void solve(){
    int a,x,y;
    cin >> a >> x >> y;


    int aliceDistanceX = abs(a-x);
    int aliceDistanceY = abs(a-y);
   
    int start = min(x,y);
    int end = max(x,y);

    for (int i=start;i<=end;i++){

        if (i == a) continue;

        if(abs(i-x) < aliceDistanceX && abs(i-y) < aliceDistanceY){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}