#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];  
    }

    long long minusOnes = 0;
    long long ones = 0;

    for (long long i = 0; i < n; i++) {
        if(a[i] == -1){
            minusOnes++;
        }  
        else{
            ones++;
        }
    }


    long long operations = 0;

    while (ones < minusOnes || minusOnes % 2 == 1) {
        operations++;
        ones++;
        minusOnes--;
    }

    cout << operations << endl;

    


}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
