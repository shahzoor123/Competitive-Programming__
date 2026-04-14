#include <bits/stdc++.h>
using namespace std;


void solve(){
    string x;
    cin >> x;

    int n = x.size();
    int y;


    vector<int> smallest(n);

    for (int i=0;i<x.size();i++){
        smallest[i] = x[i] - '0';
    }

    y = *min_element(smallest.begin(),smallest.end());

    cout << y << endl;
    

}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}