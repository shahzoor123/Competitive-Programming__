#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, p, q;
    cin >> n >> p >> q;
    
    string s;
    cin >> s;

    bool possible = false;
    int count_p = 0, count_q = 0;

    // Try all possible combinations of p and q
    for (int i=0;i<=n / p;i++){
        if((n - i*p) % q == 0){
            possible = true;
            count_p = i;
            count_q = (n - i*p) / q;
            break;
        }
    }

    if (!possible){
        cout << -1 << endl;
        return 0;
    }

    cout << count_p + count_q << endl;

    int index = 0;

    for (int i = 0; i< count_p; i++){
        cout << s.substr(index, p) << endl;
        index += p;
    }

    for (int i = 0; i< count_q; i++){
        cout << s.substr(index, q) << endl;
        index += q;
    }

    return 0;
}
