#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        if(x+1>=y&&(x+1-y)%9==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

        
    }

    return 0;
}
