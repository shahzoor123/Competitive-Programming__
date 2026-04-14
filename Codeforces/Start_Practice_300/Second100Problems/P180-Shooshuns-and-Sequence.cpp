#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k; 


    vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }


    int target = sequence[k - 1];

    bool possible = true;
    for (int i=k-1;i<n;i++){
        if (sequence[i] != target){
            possible = false;
            break;
        }
    }

    if (!possible){
        cout << -1 << endl;
        return 0;
    }

    int operations = 0;
    for (int i = k - 2; i>= 0; i--){
        if (sequence[i] != target){
            operations = i + 1;
            break;
        }
    }

    cout << operations << endl;
  


    return 0;
}
