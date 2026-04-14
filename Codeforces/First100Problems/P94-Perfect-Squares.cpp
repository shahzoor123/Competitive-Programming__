#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int n){
    if (n < 0) return false;
    int sqrt_n = floor(sqrt(n));
    return (sqrt_n * sqrt_n == n);

}

void solve() {
    long long  n;
    cin >> n;



    vector<long long> arr(n);
    vector<long long> maximumPerfectSquare;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if(!isPerfectSquare(arr[i])){
            maximumPerfectSquare.push_back(arr[i]);
        }
    }


    int maxNumber = *max_element(maximumPerfectSquare.begin(), maximumPerfectSquare.end());

    cout << maxNumber << endl;


}

int main() {
    solve();
    return 0;
}
