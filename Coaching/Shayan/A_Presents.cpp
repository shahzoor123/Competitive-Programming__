#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    vector<int> ans(n+1);
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;

        ans[x] = i;
    }

    for (int i=1;i<=n;i++){
        cout << ans[i] << " ";
    }

    

}



int main(){


  solve();        


  return 0;
}