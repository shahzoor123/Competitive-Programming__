#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && c > b || c < b && a > b){
            cout << b << endl;
        }
        else if (b < a && c > a || c < a && b > a) {
            cout << a << endl;
        }
        else if (c > a && c < b || c > b && c < a){
            cout << c << endl;
        }
    }

    return 0;
}
