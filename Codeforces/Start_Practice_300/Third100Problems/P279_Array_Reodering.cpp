#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}



void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }


    sort(a.begin(), a.end(), [](int x, int y) {
        return x % 2 == 0 && y % 2 != 0;
    });


    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            if(gcd(a[i], 2*a[j]) > 1){
                
                count++;
                
            }
        }
    }

    cout << count << endl;



    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
