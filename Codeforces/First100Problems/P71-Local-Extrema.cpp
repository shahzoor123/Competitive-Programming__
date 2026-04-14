#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int totalLocalExtrema = 0;


    for (int i = 1; i < n - 1; i++) {

        if ((a[i] < a[i-1] && a[i] < a[i+1]) || (a[i] > a[i-1] && a[i] > a[i+1])){
                totalLocalExtrema++;
        }
    }


    cout << totalLocalExtrema << endl;

}




int main() {

    solve();
    return 0;
}
