#include <bits/stdc++.h>
using namespace std;

int main() {

    string a[2], b[2];

    cin >> a[0] >> a[1];
    cin >> b[0] >> b[1];

    swap(a[1][0], a[1][1]);
    swap(b[1][0], b[1][1]);

    string A = a[0] + a[1];
    string B = b[0] + b[1];
    
    A.erase(A.find('X'), 1);
    B.erase(B.find('X'), 1);

    A += A;
    if (A.find(B) != string::npos) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
   

    return 0;
}
