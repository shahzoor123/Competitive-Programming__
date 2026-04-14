#include <bits/stdc++.h>
using namespace std;


// int findKthLargest(vector<int> arr , int kth){

//     int count = 0;


//     for (int i = 0; i < arr.size(); ++i) {
        
//         if(arr[i] == 1){
//             count++;
//         }
//     }

//     if (kth <= count){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }



void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    int count = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if(arr[i] == 1){
            count++;
        }
    }



    vector<pair<int, int>> queries(m);
    for (int i = 0; i < m; ++i) {
        cin >> queries[i].first >> queries[i].second;
    }



    for (int i = 0; i < m; ++i) {

        if (queries[i].first == 1){
            
            int idx = queries[i].second - 1;
            arr[idx] = 1 - arr[idx];
            if(arr[idx] == 1){
                count++;
            }
            else{
                count--;
            }
        }

        else if (queries[i].first == 2){
            int kth = queries[i].second;
            
            if(kth <= count){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}
