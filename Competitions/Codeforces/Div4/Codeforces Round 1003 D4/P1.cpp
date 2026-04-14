#include <iostream>
#include <vector>
using namespace std;

void solve() {
    string str;
    cin >> str;
    
    
    int n = str.size();
        
        
    if (n >=2 && str.substr(n - 2,2) == "us"){
            str.replace(n - 2, 2, "i");
    }
    
    cout << str << endl;


}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
