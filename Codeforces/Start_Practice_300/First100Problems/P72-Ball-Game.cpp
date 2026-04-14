#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int child_with_ball  = 1;

    for (int i=1;i<n;i++){

        child_with_ball = (child_with_ball + i) % n;

        if (child_with_ball == 0){
            child_with_ball = n;
        }

        cout << child_with_ball << endl;

    }
}

int main() {


    solve();

    return 0;
}
