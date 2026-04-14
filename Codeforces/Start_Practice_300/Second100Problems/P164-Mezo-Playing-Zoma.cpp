#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string str;
    cin >> str;

    int L = count(str.begin(), str.end(), 'L');
    int R = count(str.begin(), str.end(), 'R');

    cout << L + R + 1 << endl;
    
    


    
}

int main() {

    solve();

    return 0;
}
