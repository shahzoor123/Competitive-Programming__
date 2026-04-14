#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, m;
        cin >> h >> m; 
        int passed_minutes = h * 60 + m;
        int remaining_minutes = 1440 - passed_minutes;
        cout << remaining_minutes << endl; 
    }
    return 0;
} 