#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int daysToSurvive = 0;
    int i = 1;

    while (n > 0) {
        while(m * i <= n){
            i++;
            n++;
        }
        daysToSurvive++;
        n--;
    }
    cout << daysToSurvive<< endl;
   
}

int main() {
    solve();
    return 0;
}
