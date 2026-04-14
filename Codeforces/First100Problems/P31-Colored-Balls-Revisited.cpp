#include<bits/stdc++.h>
using namespace std;

void solve() {

	int n;
	cin >> n;


  	vector<int> counts(n);
    for (int i = 0; i < n; ++i) {
        cin >> counts[i];
    }


  	// Keep removing pairs until only one color remains
    while (true) {
        // Find the two largest counts
        int max1 = -1, max2 = -1; // Indices of the two largest counts
        for (int i = 0; i < n; ++i) {
            if (counts[i] > 0) {
                if (max1 == -1 || counts[i] > counts[max1]) {
                    max2 = max1;
                    max1 = i;
                } else if (max2 == -1 || counts[i] > counts[max2]) {
                    max2 = i;
                }
            }
        }

        // If there's no pair to remove, break
        if (max2 == -1) {
            break;
        }

        // Remove one ball from each of the two largest counts
        counts[max1]--;
        counts[max2]--;
    }

     // Find the remaining color
    for (int i = 0; i < n; ++i) {
        if (counts[i] > 0) {
            cout << i + 1 << endl; // Colors are 1-indexed
            return;
        }
    }



}




main() {
	int t;
	cin >> t;

	while (t--){
		solve();
	}


}