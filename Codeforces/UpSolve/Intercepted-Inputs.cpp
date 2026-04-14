#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;  
    cin >> n;
    int val = n-2;
    int a[n];


    for (auto & x: a){
        cin >> x;
    }

    map <int,int>C;

    for (int i=0;i<n;i++){
        if(val%a[i] == 0 and C[val/a[i]]){
            cout << a[i] << " " << val/a[i] << endl;
            return;
        }
        C[a[i]]++;
    }

   
}


int main() {
    int t; 
    cin >> t;

    while (t--) {
        solve();

    }

    return 0;
}
