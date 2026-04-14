#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x;
    cin >> x;

    string str = to_string(x);


    while (!str.empty() && str.back() == '0'){
            str.pop_back();
        }


    string reverse_str;

    for (int i=str.size()-1;i>=0;i--){
        reverse_str += str[i];
    }


    if (str == reverse_str) cout << "YES" << endl;
    else cout << "NO" << endl;
   
    
}

int main() {
    solve();
    return 0;
}
