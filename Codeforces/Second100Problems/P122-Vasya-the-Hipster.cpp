#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b; 

 
    cout << min(a, b) << " " << abs(a - b) / 2 << endl;
}

int main() {
    solve(); 
    return 0;
}
