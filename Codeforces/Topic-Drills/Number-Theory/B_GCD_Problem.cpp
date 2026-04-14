#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long a, b, c;

    if (n % 2 == 0) {
        c = 1;
        a = (n-1)/2;
        b = (n-1)/2 +1;
    } else {
        if((n-1)%4==0){
            c = 1;
            a = (n-1)/2-1;
            b = (n-1)/2 +1;
        }
        else{
            c = 1;
            a = (n-1)/2-2;
            b = (n-1)/2+2;
        }
       
    }

    cout << a << " " << b << " " << c << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

