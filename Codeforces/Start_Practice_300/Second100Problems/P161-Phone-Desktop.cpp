#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    int screensize = 15;


    if (x == 0){
       cout << ceil(y / 2.0) << endl; 
       return;
    }
    else if (y == 0) {
        cout << ceil(x / 15.0) << endl;
    }
    else {

        int screens_for_y = ceil(y / 2.0);

        int used_space = screens_for_y * 15 - (y * 4);

        int remaining_x = max(0, x - used_space);

        int screens_for_x = ceil(remaining_x / 15.0); 

        cout << screens_for_y + screens_for_x << endl;
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
