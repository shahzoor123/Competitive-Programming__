#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n,x;
    cin >> n >> x;

    vector<int> food_piles_array(n);

    for (int i=0;i<n;i++){
        cin >> food_piles_array[i];
    }


    int minimum_changes = 0;
    int low = food_piles_array[0] - x;
    int high = food_piles_array[0] + x;
  


    for (int i=1;i<n;i++){
        
        int current_low = food_piles_array[i] - x;
        int current_high = food_piles_array[i] + x;

        low = max(low, current_low);
        high = min(high, current_high);


        if (low > high){
          minimum_changes++;
          low = current_low;
          high = current_high;
        }

    }

    cout << minimum_changes << endl;
    
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
