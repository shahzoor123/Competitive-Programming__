#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;


    int s1 = s.size();
    int s2 = t.size();
    int count  = 0;

    int i = s1 - 1, j = s2 - 1;

    while(i >= 0 && j >= 0 && s[i] == t[j]){

        i--;
        j--;
    }

    int moves = (i + 1) + (j + 1);

    cout << moves << endl;

     

}

int main() {

 
    solve();
    
    return 0;
}
