#include <bits/stdc++.h>
using namespace std;


string issorted(vector<int> a){

    bool canSort = true;

    for (int i = 0; i < a.size() - 1; ++i) {
        if (a[i] > a[i + 1]){
            return "NO";
        } 
    }

    return "YES";
}


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < a.size(); ++i) {
        int temp = a[0];
        a.erase(a.begin());
        a.push_back(temp);

        if (issorted(a) == "YES"){
            cout << "YES" << endl;
            return;
        }

    }

    cout << "NO" << endl;

}


int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
