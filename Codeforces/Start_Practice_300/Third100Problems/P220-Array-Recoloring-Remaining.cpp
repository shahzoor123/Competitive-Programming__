#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maxCost(int n, int k, vector<int>& a) {

    sort(a.begin(), a.end(), greater<int>());
    long long sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }


    long long lastElement = a[k];
    return sum + lastElement;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << maxCost(n, k, a) << endl;
    }
    return 0;
}