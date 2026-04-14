#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d; 



    bool notIntersect = false;



    if ((a<b&&(c>a&&c<b)+(d>a&&d<b)==1)||(a>b&&(c>b&&c<a)+(d>b&&d<a)==1)){
        notIntersect = true;
    }


    if (notIntersect)cout << "YES" << endl;
    else cout << "NO" << endl;
}




int main() {

    int t;
    cin >> t;
    
    while (t--) {
        
        solve();
       
    }

    return 0;
}
