#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,m;
    if (!(cin >> n >> m)) cout << 0;


    vector<long long> net(n+1, 0);


    for (int i = 0; i < m; i++) {
        int a,b; long long c;
        cin >> a >> b >> c;
        net[a] -= c;
        net[b] += c;
    }
    
    long long ans = 0;

    for (int i=0;i<=n;i++){
        if(net[i] > 0){
            ans += net[i];
        }
       
    }

    cout << ans << endl;

    
}

int main(){

    solve();        
    return 0;
}
