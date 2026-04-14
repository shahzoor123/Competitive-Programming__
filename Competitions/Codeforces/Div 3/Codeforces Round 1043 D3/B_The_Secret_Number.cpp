#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n;
    cin >> n;

    vector<long long> ans;

    long long cur = 10;
    while(cur + 1 <= n){

      if(n % (cur + 1) == 0) ans.push_back(n / (cur+1));
      cur *= 10;

    }

    sort(ans.begin(),ans.end());
    cout << ans.size() << endl;
    for (auto i : ans) cout << i << " ";
    if(ans.size()) cout << endl;


}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}