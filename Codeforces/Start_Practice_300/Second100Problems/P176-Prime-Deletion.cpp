#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t;
  string s;
  for (cin >> t; t--;) {
    cin >> s;
    for (char c: s)
      if (c == '1' || c == '3')
        cout << c;
    cout << endl;
  }
}