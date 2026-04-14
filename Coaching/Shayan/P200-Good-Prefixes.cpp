#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--){
        
        long long n;
        cin >> n;

        vector<long long> arr(n);

        for (long long i=0;i<n;i++){
            cin >> arr[i];
        }


        long long count = 0;
        long long mx = -1;
        long long s = 0;

        for (long long i=0;i<n;i++){
            mx = max(mx, arr[i]);
            s += arr[i];
            if (s - mx == mx){
                count++;
            }
        }

        cout << count << endl;

    }

    return 0;
}