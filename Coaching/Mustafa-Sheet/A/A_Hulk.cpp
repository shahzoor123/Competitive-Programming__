#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  for (int i = 0; i < n-1; i++)
    cout << (i&1?"I love that ":"I hate that ");
  cout << (n&1?"I hate it":"I love it");
}

