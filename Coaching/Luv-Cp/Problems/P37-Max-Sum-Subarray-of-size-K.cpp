#include <bits/stdc++.h>
using namespace std;
const int N = 1e2+10;


class Solution {
public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
    }
};

int main() {
    int k = 2;
    vector<int> arr = {100, 200, 300, 400};


    Solution sol;
    vector<int> result = sol.maximumSumSubarray(arr, k);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
