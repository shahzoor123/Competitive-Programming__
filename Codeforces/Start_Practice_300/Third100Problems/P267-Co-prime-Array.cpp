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

    vector<int> result;

    int insertions = 0;

    result.push_back(a[0]);

    for (int i=1;i<n;i++){
        if(gcd(a[i-1], a[i]) == 1){
            result.push_back(a[i]);
        }
        else{
            result.push_back(1); // 1 is co-prime with all numbers
            result.push_back(a[i]);
            insertions++;
        }
    }


    cout << insertions << "\n";
    for (int x : result) cout << x << " ";
    cout << "\n";


   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n; 
    solve(n);  

    return 0;
}
