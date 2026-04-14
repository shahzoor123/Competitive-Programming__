#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,m;
    cin >> n >> m;

    long long Xc,Yc;
    cin >> Xc >> Yc;

    long long k;
    cin >> k;


    long long totalSteps = 0;

    for (long long i = 0; i < k; i++) {
        long long Dx,Dy;
        cin >> Dx >> Dy;

        long long maxX = LLONG_MAX, maxY = LLONG_MAX;

        if (Dx > 0) maxX = (n - Xc) / Dx;
        if (Dx < 0) maxX = (Xc - 1) / abs(Dx);
        if (Dy > 0) maxY = (m - Yc) / Dy;
        if (Dy < 0) maxY = (Yc - 1) / abs(Dy);

        long long steps = min(maxX, maxY);

        Xc += steps * Dx;
        Yc += steps * Dy;
        totalSteps += steps;

    }



    cout << totalSteps << endl;

    
}

int main(){
  
    solve();        
    return 0;
}
