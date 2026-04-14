#include <bits/stdc++.h>
using namespace std;

void solve() {
    string victim1, victim2;
    cin >> victim1 >> victim2;

    int n;
    cin >> n;

    vector<pair<string, string>> events(n);
    for (int i = 0; i < n; ++i) {
        cin >> events[i].first >> events[i].second;
    }

    cout << victim1 << " " << victim2 << endl;

    for (int i = 0; i < n; ++i) {
        string murdered = events[i].first;
        string replacement = events[i].second;

        if (victim1 == murdered) victim1 = replacement;
        else if (victim2 == murdered) victim2 = replacement;

        cout << victim1 << " " << victim2 << endl;

    }
    


}

int main() {
    solve();
    return 0;
}
