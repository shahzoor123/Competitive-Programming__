#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    
    vector<int> suneet = {a1,a2};
    vector<int> slavic = {b1,b2};
    int suneet_wins = 0;

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            int suneet_rounds = 0 , slavic_rounds = 0;

            if (suneet[i] > slavic[j]) suneet_rounds++;
            else if (suneet[i] < slavic[j]) slavic_rounds++;

            int othersuneet = (i == 0) ? 1 : 0;
            int otherslavic = (j == 0) ? 1 : 0;


            if (suneet[othersuneet] > slavic[otherslavic]) suneet_rounds++;
            else if (suneet[othersuneet] < slavic[otherslavic]) slavic_rounds++;

            if (suneet_rounds > slavic_rounds) suneet_wins++;

        }
    }

    cout << suneet_wins << endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
