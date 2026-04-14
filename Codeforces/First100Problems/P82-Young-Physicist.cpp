#include <iostream>
using namespace std;

int main() {
    int n, x, y, z, sum_x = 0, sum_y = 0, sum_z = 0;;
    cin >> n;

    while (n--) {
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    cout << ((sum_x == 0 && sum_y == 0 && sum_z == 0) ? "YES" : "NO") << endl;

    return 0;
}
