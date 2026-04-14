#include<bits/stdc++.h>
using namespace std;

int t, n, x, a[200005];
map<int, int> bul;

int main() {
    cin >> t;
    while (t--) {
        bul.clear();
        cin >> n >> x;
        
        cout << "\n--- Test case ---\n";
        cout << "n: " << n << ", x: " << x << "\nArray: ";
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            bul[a[i]]++;
            cout << a[i] << " ";
        }
        cout << "\n";

        for (int i = 0;; i++) {
            cout << "\nChecking i = " << i << "\n";
            cout << "bul[" << i << "] = " << bul[i] << "\n";
            
            if (bul[i] == 0) {
                cout << "MEX found: " << i << "\n";
                cout << i << '\n';
                break;
            }

            // Transfer all but one occurrence of i to i + x
            bul[i + x] += bul[i] - 1;

            cout << "bul[" << i << "] set to 1, rest moved to bul[" << i + x << "]\n";
            cout << "Map state now:\n";
            for (auto& p : bul) {
                if (p.second > 0) // show only existing numbers
                    cout << "  " << p.first << ": " << p.second << "\n";
            }

            bul[i] = 1;
        }
    }
}
