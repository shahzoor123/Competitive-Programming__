#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> prices(n+1);
    vector<int> minimum_distance;



    for (int i = 1; i <= n; i++) {
        cin >> prices[i];
    }

    
    for (int i = 1; i <= n; i++) {
        
        if (prices[i] > 0 and prices[i] <= k){

                int temp_distance = abs(m - i);
                minimum_distance.push_back(temp_distance);
                // cout << prices[i] << " House No: " << i << " " << endl;

        }
    }

    if(!minimum_distance.empty()){
        int minimumElement = *min_element(minimum_distance.begin(),minimum_distance.end());
        cout << minimumElement * 10 << endl;
    }

}


int main() {

    solve();
    return 0;
}
