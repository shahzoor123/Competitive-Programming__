#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    vector<int> lights(n);
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        lights[i] = x;

    }

    int red = 0, blue = 0, undecided = 0;

    for (int i=0;i<n;i++){
        if ( lights[i] == 1){
            red++;
        }
        else if (lights[i] == 2){
            blue++;
        }
        else{
            undecided++;
        }
    }

    int diff = blue + undecided - red;

    if(diff % 2 == 0){
        int x = diff / 2;
        if(x >= 0 && x <= undecided){
            cout << "Yes" << endl;
            return;
        }
     
    }
  
    cout << "No" << endl;

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}