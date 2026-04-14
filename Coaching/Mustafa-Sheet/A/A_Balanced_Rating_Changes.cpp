#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    int odd = 0;

    for (int i = 0; i<n ;i++){
      cin >> v[i];
      if(v[i] % 2) odd++;
    }


    odd=odd/2;

    for (int i = 0; i<n ;i++){
      if(v[i]%2){
         if(odd>0) odd--,v[i]--;
         else v[i]++;
      }
      cout <<v[i]/2 << endl;
    }

}

int main() {
    solve();
    return 0;
}
