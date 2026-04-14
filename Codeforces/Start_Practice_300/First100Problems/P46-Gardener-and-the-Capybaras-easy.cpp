#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();

    string a,b,c;

    for (int i=1;i<n - 1;i++){

        for (int j=i+1;j<n;j++){

            a = s.substr(0, i);
            b = s.substr(i, j-i);
            c = s.substr(j);

            if (a+b+c == s){
                if ((a <= b && c <= b ) || (b <= a && b <= c)){
                    cout << a << " " << b << " "  << c  << " " << endl;
                    return;
                } 
            }
           
        }
    
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
