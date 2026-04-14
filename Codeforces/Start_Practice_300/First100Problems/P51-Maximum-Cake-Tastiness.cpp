#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> a){

    if (a.size() < 2){
        return 0;
    }

    int current_max = INT_MIN;

    for (int i=0;i<a.size()-1;i++){
        int adjsent_max = a[i] + a[i+1];
        if (current_max < adjsent_max){
            current_max = adjsent_max;
        }
    }

    return current_max;
}


// vector<int> reverseSubsegment(vector<int> a, int l , int r){

//     l -= 1;
//     r -= 1;

//     while (l < r){
//         swap(a[l],a[r]);
//         l++;
//         r--;
//     }

//     return a;

// }



// O(n^2) solution  --- TLE

// int findSubsegment(vector<int> a){

//     int current_max = findMax(a);

//     for (int i = 1; i <= a.size(); ++i) {
//         for (int j = i; j <= a.size(); ++j) {
//             vector<int> temp = reverseSubsegment(a, i, j);
//             int new_max = findMax(temp);
//             current_max = max(current_max,new_max);
//         }
//     }

//     return current_max;
// }



int findSubsegment(vector<int> a){

    int n = a.size();

    int current_max = findMax(a);

    for (int i = 1; i < n-1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (i > 0) {

                current_max = max(current_max, a[i - 1] + a[j]);
            }
            if (j < n - 1) {
                current_max = max(current_max, a[i] + a[j + 1]);
            }
        }
    }

    return current_max;
}





void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int current_tastiness,new_tastiness;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    current_tastiness = findMax(a);
    new_tastiness = findSubsegment(a);

    if (current_tastiness < new_tastiness){
        current_tastiness = new_tastiness;
    }
    cout << current_tastiness << endl;


}





int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
