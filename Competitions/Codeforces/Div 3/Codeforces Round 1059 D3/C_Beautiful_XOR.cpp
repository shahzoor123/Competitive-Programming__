#include <bits/stdc++.h>
using namespace std;


string decToBinary(long long n) {
    if (n == 0) return "0";
    string s = "";
    while (n > 0) {
        s = char('0' + (n % 2)) + s;
        n /= 2;
    }
    return s;
}

void solve() {
    long long a, b; cin >> a >> b;

    if (b == a){
        cout << 0 << endl;
        return;
    }

    string ba = decToBinary(a);
    string bb = decToBinary(b);

    if(ba.size() < bb.size()){
        cout << -1 << endl;
        return;
    }

    string c = "";
    for (int i = 0; i < (ba.size() - bb.size()); i++) c += "0";
    bb = c + bb;
    
    vector<long long> ans;
    for (int i = ba.size() - 1; i >= 0; i--) {
        if (ba[i] == bb[i]) continue;
        else {
            long long x = 1LL << (ba.size() - i - 1);
            if (x > a) {
                cout << -1 << endl;
                return;
            }
            a = a ^ x;
            ans.push_back(x);
        }
    }

    
    cout << ans.size() << "\n";
    for (auto v : ans) cout << v << " ";
    cout << "\n";


}

int main() {
    int t; cin >> t;
    while (t--) solve();
}
