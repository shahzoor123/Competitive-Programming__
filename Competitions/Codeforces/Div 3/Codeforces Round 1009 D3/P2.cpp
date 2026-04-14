#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }


        while(a.size() > 1){
            int current_i = a[a.size() - 2];
            int current_j = a[a.size() - 1];
            int x = current_i + current_j - 1;

            a.pop_back();
            a.pop_back();
            a.push_back(x);

        }

        cout << a[0] << "\n";
    }

    return 0;
}