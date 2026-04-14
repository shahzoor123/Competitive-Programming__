#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    bool known = false;
    int x = -1;

    // If we have one b[i] present
    for(int i = 0; i < n; i++) {
        if(b[i] != -1) {
            x = a[i] + b[i];
            known = true;
            break;
        }
    }

    if(known){
        for(int i = 0; i < n; i++) {
            if(b[i] != -1) {
                if(a[i] + b[i] != x) {
                    cout << 0 << endl;
                    return;
                }
            } else {
                int bi = x - a[i];
                if(bi < 0 || bi > k) {
                    cout << 0 << endl;
                    return;
                }
            }
        }
        cout << 1 << endl;
        return;
    }

    // If all b[i] == -1
    long long l = 0, r = LLONG_MAX;

    for(int i = 0; i < n; i++) {
        l = max(l, 1LL * a[i]);       // x >= a[i] + 0
        r = min(r, 1LL * a[i] + k);   // x <= a[i] + k
    }

    cout << max(0LL, r - l + 1) << endl;
}


int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
























// O(N^2) Solution

// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n,k;
//     cin >> n >> k;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];  
//     }


//     vector<int> b(n);
//     for (int i = 0; i < n; i++) {
//         cin >> b[i];  
//     }

//     int ways = 0;

//     for (int x = 0; x <= 2 * k; x++) {
//         bool valid = true;
//         for (int i = 0; i < n; i++) {
//             if (b[i] == -1) {
//                 int bi = x - a[i];
//                 if (bi < 0 || bi > k) {
//                     valid = false;
//                     break;
//                 }
//             } else {
//                 if (a[i] + b[i] != x) {
//                     valid = false;
//                     break;
//                 }
//             }
//         }
//         if (valid) ways++;
//     }

//     cout << ways << "\n";


    
// }

// int main(){
//     int t;
//     cin >> t;

//     while (t--) {
//         solve();        
//     } 

//     return 0;
// }
