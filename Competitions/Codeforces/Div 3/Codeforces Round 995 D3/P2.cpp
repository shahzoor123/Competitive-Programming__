#include <bits/stdc++.h>
using namespace std;

// First methods give TLE on large input 

// void solve() {
//     long long n, a, b, c;
//     cin >> n >> a >> b >> c; 

//     long long totalKilomenters = 0;
//     long long completionDay = 0;

//     while (totalKilomenters < n){

//         totalKilomenters += a;
//         completionDay++;

//         if (totalKilomenters >= n) break; 

//         totalKilomenters += b;
//         completionDay++;

//         if (totalKilomenters >= n) break; 

//         totalKilomenters += c;
//         completionDay++;

//     }

//     cout << completionDay << endl;

// }



// Second methods using math fast 


void solve() {
    long long n, a, b, c;
    cin >> n >> a >> b >> c; 

   
    long long totalDistancePerCycle = a + b + c;
    long long completionCycles = n / totalDistancePerCycle;
    long long ramainingDistance = n % totalDistancePerCycle;

    long long completionDay = completionCycles * 3;

    if (ramainingDistance > 0){
        completionDay++;
        ramainingDistance -= a;
    }

    if (ramainingDistance > 0){
        completionDay++;
        ramainingDistance -= b;
    }

    if (ramainingDistance > 0){
        completionDay++;
        ramainingDistance -= c;
    }

    cout << completionDay << endl;

}

int main() {

    ios::sync_with_stdio(false);  // Disable synchronization with C I/O
    cin.tie(NULL);  // Untie cin and cout to speed up I/O
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
