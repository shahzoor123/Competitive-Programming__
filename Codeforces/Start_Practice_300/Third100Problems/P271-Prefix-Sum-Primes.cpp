#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;


    int ones = 0;
    int twos = 0;

    for (int i=0;i<n;i++){
        if(a[i] == 2){
            twos++;
        }
        else{
            ones++;
        }
    }

    if(twos == 0){
        for (int i=0;i<n;i++){
            cout << 1 << " ";
        }
    }
    else if (ones == 0){
        for (int i=0;i<n;i++){
            cout << 2 << " ";
        }
    }
    else{
        cout << "2 1" << " ";
        for (int i=0;i<twos-1;i++) cout << 2 << " ";
        for (int i=0;i<ones-1;i++) cout << 1 << " ";
        
    }

}

int main() {
    solve();
    return 0;
}
