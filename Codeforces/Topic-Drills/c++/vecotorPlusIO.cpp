#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    vector<int> v = {1,2,3};


    for(int i=0;i<n;i++) cout << i << endl;

    int sum = 0;

    for (auto i : v){
        sum += v[i];
    }

    int maxElement = *max_element(v.begin(),v.end());

    cout << sum << " " << maxElement << endl;





    

}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}