#include <iostream>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;


    // When Alice Wins
    if ((b + a) % 2 == 1){
        cout << "Alice" << endl;
        return;
    }
    else {
        cout << "Bob" << endl;
        return;
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
