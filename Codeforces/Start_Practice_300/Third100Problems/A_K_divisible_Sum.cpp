#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin >> n >> k;
    
    vector<int> a(n, 1);

    int sum = n;

    if(sum % k) {
        cout << 1 << endl;
    }
    else{
        int diff = (k - (sum % k)) % k; 

        int dist = diff/n;

        int max_elem = 1 + dist + (diff % n != 0 ? 1 : 0);

        cout << max_elem << endl;
        
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