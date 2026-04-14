#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        long long x,y,z; cin>>x>>y>>z;
        bool ok = true;
        for(int b=0;b<31;b++){
            int xi = (x>>b)&1;
            int yi = (y>>b)&1;
            int zi = (z>>b)&1;
            if(xi + yi + zi == 2){ ok = false; break; }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}
