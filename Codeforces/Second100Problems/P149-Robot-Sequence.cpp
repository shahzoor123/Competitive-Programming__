#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a;
    cin >> a;

    string str;
    cin >> str;

    int count = 0;

    for (int i=0;i<a;i++){
        int x = 0, y = 0;

        for (int j=i;j<a;j++){
            if (str[j] == 'U') y++;
            if (str[j] == 'D') y--;
            if (str[j] == 'R') x++;
            if (str[j] == 'L') x--;

            if (x == 0 && y == 0) count++;
        }

    }
    

    cout << count << endl;


   
}

int main() {
 
    solve();
   
    return 0;
}