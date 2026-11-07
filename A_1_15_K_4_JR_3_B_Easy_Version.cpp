#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vl vector<long long>
#define endl "\n"
#define nline cout<<endl
#define f(i, n) for (ll i = 0; i < n; ++i)

template <typename T>
void prnt(const T &val) {
    if (std::is_arithmetic<T>::value || std::is_same<T, string>::value) {
        cout << val << '\n';
    } else {
        for (const auto &x : val)
            cout << x << ' ';
        cout << '\n';
    }
}

// Problem Statement
/*
  
*/

// Small Observations
/*
  
*/

// Claims on Algo
/*
  
*/

int getDoubledArea(int x2, int y2, int x3, int y3) {

    int value = 0 * (y2 - y3) + x2 * (y3 - 0) + x3 * (0 - y2);
    return abs(value);
}



void solve() {

    int n;
    cin >> n;

    if(n % 2 == 0){
        int x2 = 0, y2 = n/2 , x3 = n/2, y3 = 0;
        cout << getDoubledArea(x2,y2,x3,y3) <<  endl;
    }
    else{
        n-= 1;
        int x2 = 0, y2 = n/2 , x3 = n/2, y3 = 0;
        cout << getDoubledArea(x2,y2+1,x3,y3) <<  endl;
    }

   

    


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}