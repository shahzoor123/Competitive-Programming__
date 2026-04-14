#include <iostream>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;



        for (int i = 1; i < n; i++) {
            if (a[i] == '1') {
                if(a[i] == '1'){
                    swap(a[i], b[i - 1]);
                }
                if(b[i] == '1'){
                    swap(b[i], a[i - 1]);
                }
            }
        }

     
        cout << (possible ? "YES" : "NO") << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}