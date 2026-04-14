#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int n;
    cin >> n;

    vector<tuple<int, int, int>> cars(n);
    for (int i = 0; i < n; ++i) {
        int x, y, v;
        cin >> x >> y >> v;
        cars[i] = make_tuple(x, y, v);
    }

    double min_time = DBL_MAX;
    for (int i = 0; i < n; ++i) {
        int x, y, v;
        tie(x, y, v) = cars[i];
        double distance = sqrt((x - a) * (x - a) + (y - b) * (y - b));
        double time = distance / v;
        min_time = min(min_time, time);
    }

    cout << fixed << setprecision(10) << min_time << endl;
}

int main() {
    solve();
    return 0;
}
