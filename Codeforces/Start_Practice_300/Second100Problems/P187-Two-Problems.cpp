#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, t, a, b, da, db;
    cin >> x >> t >> a >> b >> da >> db;

    
    vector<int> ProblemOnePoints;
    for (int i=0;i<t;i++){
        int points = a - i * da;
        ProblemOnePoints.push_back(points);
    }

    vector<int> ProblemTwoPoints;
    for (int i=0;i<t;i++){
        int points = b - i * db;
        ProblemTwoPoints.push_back(points);
    }

    if (x == 0) {
        cout << "YES" << endl;
        return;
    }

    // Check if Valera solved only Problem 1
    for (int i = 0; i < t; i++) {
        if (ProblemOnePoints[i] == x) {
            cout << "YES" << endl;
            return;
        }
    }

    // Check if Valera solved only Problem 2
    for (int i = 0; i < t; i++) {
        if (ProblemTwoPoints[i] == x) {
            cout << "YES" << endl;
            return;
        }
    }



    // Check if Valera solved both problems
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            if (ProblemOnePoints[i] + ProblemTwoPoints[j] == x) {
                cout << "YES" << endl;
                return;
            }
        }
    } 

    cout << "NO" << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
