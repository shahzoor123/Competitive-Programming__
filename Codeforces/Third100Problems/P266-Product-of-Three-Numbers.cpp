#include <bits/stdc++.h>
using namespace std;

void solve(int n) {

    int a = -1, b = -1;


    for (int i=2;i*i<=n;i++){

        if(n % i == 0){
            a = i;
            n /= i;
            break;
        }
        
    }

    if(a == -1){
        cout << "NO" << endl;
        return;
    }


    for (int i=a+1;i*i<=n;i++){

        if(n % i == 0 && i != a){
            b = i;
            n /= i;
            break;
        }
        
    }


    int c = n;

    if(a != -1 && b != -1 && c != a && c != b && c >= 2){
        cout << "YES" << endl;
        cout << a << " " << b << " " << c << endl;
    }
    else{
        cout << "NO" << endl;
    }

    

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
