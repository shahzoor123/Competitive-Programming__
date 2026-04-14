#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int y=n-10;

    if(n-10<=0||n-10>11) cout<<0;
    else if(n-10==10)cout<<15;
    else cout<<4;

}