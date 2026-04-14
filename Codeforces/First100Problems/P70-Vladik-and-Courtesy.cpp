#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    int turn = 1;

    while (true){

        if (turn % 2 != 0){

            if (a >= turn){
                a -= turn;
            }
            else{
                cout << "Vladik" << endl;
                return;
            }
        }


        else {

            if (b >= turn){
                b -= turn;
            }
            else{
                cout << "Valera" << endl;
                return;
            }
        }

            turn++;
    }



}

int main() {

    solve();
    return 0;
}
