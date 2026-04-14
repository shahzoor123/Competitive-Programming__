#include <bits/stdc++.h>
using namespace std;


void solve(){


    vector<int> ratings(5);
    int sum = 0;

    for (int i=0;i<5;i++){
        cin  >> ratings[i];
        sum += ratings[i];
    }


    if(sum >= 35){
        cout << 0 << endl;
        return;
    }

    sort(ratings.begin(),ratings.end());


    int coins = 0;

    for (int i=0;i<5 && sum < 35;i++){
        int increase = 10 - ratings[i];
        sum += increase;
        coins += 100;
    }

    cout << coins << endl;
    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}