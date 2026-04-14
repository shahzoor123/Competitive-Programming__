#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<int> times(n);
    multiset<int> calculate_times_set;  

    long long rozdil = 0;

    for (int i = 0; i < n; i++) {
        cin >> times[i];  
    }

    for (int i = 0; i < n; i++) {
        int townTime = times[i] - rozdil;
        calculate_times_set.insert(townTime); 

    }

    int minElement = *calculate_times_set.begin();

    int minIndex = -1;
    for (int i = 0; i < n; i++) {
        int adjustedTime = times[i] - rozdil;
        if (adjustedTime == minElement) {
            minIndex = i + 1; // Convert to 1-based index
            break;
        }
    }

    int count = calculate_times_set.count(minElement);


    if (count > 1){
        cout << "Still Rozdil" << endl;
    }
    else{
        cout << minIndex << endl;
    }
    


}

int main() {

    solve();  

    return 0;
}
