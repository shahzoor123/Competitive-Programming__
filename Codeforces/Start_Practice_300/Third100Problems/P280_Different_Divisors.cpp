#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int nextPrime(int start) {
    while (!isPrime(start))
        start++;
    return start;
}

void solve() {
    int d;
    cin >> d;
    
    int p = nextPrime(1 + d);     
    int q = nextPrime(p + d);      

    cout << p * q << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}




















// O(N^2)

// #include <bits/stdc++.h>
// using namespace std;

// int D; 

// bool printFactors2(int n) {
//     int count = 0;
//     vector<int> a;

//     for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             a.push_back(i);
//             count++;
//             if (i != n / i) {
//                 a.push_back(n / i);
//                 count++;
//             }
//         }
//     }

//     sort(a.begin(), a.end(), greater<int>());  
//     // Check all pairwise differences
//     for (int i = 0; i < a.size(); i++) {
//         for (int j = i + 1; j < a.size(); j++) {
//             if (abs(a[i] - a[j]) < D) {
//                 return false;
//             }
//         }
//     }

//     return count >= 4;
// }

// void solve() {
//     cin >> D;

//     int a = D + 1;
//     while (true) {
//         if (printFactors2(a)) {
//             cout << a << endl;
//             break;
//         }
//         a++;
//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }

//     return 0;
// }
