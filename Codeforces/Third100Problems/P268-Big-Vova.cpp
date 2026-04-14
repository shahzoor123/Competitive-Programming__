#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}


void solve(int n) {
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<bool> used(n, false);
    vector<int> b;
    int current_gcd = 0;

    for (int i=0;i<n;i++){

        int max_gcd = 0, index = -1;

        for (int j=0;j<n;j++){

            if(!used[j]){
                int g = gcd(current_gcd,a[j]);
                if(g > max_gcd){
                    max_gcd = g;
                    index = j;
                }
            }
        }

        used[index] = true;
        b.push_back(a[index]);
        current_gcd = gcd(current_gcd, a[index]);
 
    }


    for (int i=0;i<n;i++){
        cout << b[i] << " ";
    }

    cout << endl;

    
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;
        solve(n); 
    }

    return 0;
}