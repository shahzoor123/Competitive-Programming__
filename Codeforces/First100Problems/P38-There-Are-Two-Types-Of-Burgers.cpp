#include <bits/stdc++.h>
using namespace std;



void solve() {
    int b,p,f;
    cin >> b >> p >> f;

    int h,c;
    cin >> h >> c; 

    // cout << b << p << f << endl << h << c << endl;

    int maximum_profit = 0;
    int total_hamburgers = 0;
    int total_chicken_burger = 0;

    if (h >= c){
        while (b >= 2 && p > 0){
            total_hamburgers++;
            p -= 1;
            b -= 2;
        }
        while (b >= 2 && f > 0){
            total_chicken_burger++;
            f -= 1;
            b -= 2;
        }
    }
    else {

        while (b >= 2 && f > 0){
            total_chicken_burger++;
            f -= 1;
            b -= 2;
        }
        while (b >= 2 && p > 0){
            total_hamburgers++;
            p -= 1;
            b -= 2;
        }
 
    }


    maximum_profit = (total_hamburgers * h) + (total_chicken_burger * c);
    // cout << "p -> "  << p << " Hum > " << total_hamburgers << " total_chicken_burger -> " << total_chicken_burger  << " Profit -> " << maximum_profit << endl;

    cout << maximum_profit << endl;



}

int main() {

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
