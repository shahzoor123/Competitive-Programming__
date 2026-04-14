#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b; 
    
    int midPoint = abs((a + b) / 2);
    int aMoves = abs(a - midPoint);
    int bMoves = abs(b - midPoint);
    int tiredness = 0;

    // cout << aMoves << " " << bMoves << endl;

    for (int i=0;i<=aMoves;i++){
        tiredness += i;
    }


    for (int i=0;i<=bMoves;i++){
        tiredness += i;
    }


    cout << tiredness << endl;



}

int main() {

    solve();  

    return 0;
}
