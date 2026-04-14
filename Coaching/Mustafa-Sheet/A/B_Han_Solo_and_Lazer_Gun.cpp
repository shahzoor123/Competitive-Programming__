#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x0,y0;
    cin >> n >> x0 >> y0;

    set<pair<int,int>> stormtrooper;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        int dx = x - x0;
        int dy = y - y0;

        int g = __gcd(dx,dy);

        dx /= g;
        dy /= g;

        if(dx < 0){
            dx = -dx;
            dy = -dy;
        }
        else if(dx == 0 && dy < 0){
            dy = -dy;
        }

        stormtrooper.insert({dx,dy});
        
    }




    cout << stormtrooper.size() << endl;

    
}

int main(){

    solve();        
    return 0;
}
