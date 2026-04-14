#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


void solve() {
    int n, m, z;
    cin >> n >> m >> z;

    int lcm_value = lcm(n,m);

    int total_kills;

    total_kills = z / lcm_value;

    cout << total_kills << endl;

}

int main() {
    solve();
    return 0;
}
