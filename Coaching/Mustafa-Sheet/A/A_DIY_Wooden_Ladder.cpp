#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    
    map<int,int> freq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;  
        freq[x]++;
    }

    int largest = -1, second_largest = -1;

    for (const auto& pair : freq){

        int plank = pair.first;
        int count = pair.second;

        if (plank > largest) {
            second_largest = largest;
            largest = plank;
        } else if (plank > second_largest) {
            second_largest = plank;
        }

        if (count >= 2) {
            if (plank > largest) {
                second_largest = plank;
                largest = plank;
            } else if (plank > second_largest) {
                second_largest = plank;
            }
        }
    }

    if (second_largest == -1) {
        cout << 0 << endl;
        return;
    }

    int totalLadders = n - 2;
    int laddersCapacity = min(largest, second_largest) - 1;

    cout << max(0, min(laddersCapacity, totalLadders)) << endl;
    
    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
