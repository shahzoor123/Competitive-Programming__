#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int V1, V2, V3, Vm;
    cin >> V1 >> V2 >> V3 >> Vm;


    if (Vm > 2*V3 || V3 > 2* Vm || V2 <= Vm) {
        cout << -1 << endl;
    }
    else{
        cout << 2*V1 << endl << 2 * V2 << endl << max(V3,Vm) << endl;
    }

    return 0;
}
