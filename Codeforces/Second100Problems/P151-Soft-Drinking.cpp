#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalMLOfDrink = (k * l) / nl;
    int totalLimesSlices = c * d;
    int totalSalt = p / np;
    int minimumToasts = min({totalMLOfDrink, totalLimesSlices, totalSalt}) / n;

    cout << minimumToasts << endl;

}

int main() {
 
    solve();
   
    return 0;
}