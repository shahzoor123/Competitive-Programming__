#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    double totalOrange = 0;

    int count = 0;

    for (int i=0;i<n;i++){
      int x;
      cin >> x;

      count++;
      totalOrange += x;

    }


    cout << fixed << setprecision(10) << totalOrange / count << endl;



}



int main(){

  solve();        


  return 0;
}