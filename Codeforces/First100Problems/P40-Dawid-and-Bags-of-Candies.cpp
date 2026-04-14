#include <bits/stdc++.h>
using namespace std;


void solve() {

    int a1,a2,a3,a4;
    vector<int> candies(4);

    for (int i=0;i<4;i++){
        cin >> candies[i];
    }

    int total_sum = candies[0] + candies[1] + candies[2] + candies[3];
  
    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
        return;
    }


    int half_sum = total_sum / 2;


    for (int i=0;i<(1 << 4);i++){

        int subset_sum = 0;

        for (int j=0;j<candies.size();j++){

            if (i & (1 << j)) { // If the j-th bit of i is set, include candies[j] in the subset
                subset_sum += candies[j];
            }

        }

        if (subset_sum == half_sum) {
            cout << "YES"<< endl;
            return;
        }

    }

    cout << "NO" << endl;

}

int main() {
  
    solve();
    return 0;
}
