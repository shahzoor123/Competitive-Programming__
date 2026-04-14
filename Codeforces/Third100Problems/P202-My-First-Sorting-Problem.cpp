#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y; 

        int minElement = min(x,y);
        int maxElement = max(x,y);

        cout << minElement << " " << maxElement << endl;

       
    }

    return 0;
}
