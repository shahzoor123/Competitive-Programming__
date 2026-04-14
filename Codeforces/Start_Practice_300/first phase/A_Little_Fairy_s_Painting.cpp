#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    set<int>  s;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s.insert(x);
    }

   int smallestNumberGreaterThanDisticntNumber = s.size();

   for (auto element : s){
    if(element >= s.size()){
        smallestNumberGreaterThanDisticntNumber = element;
        break;
    }
   }


   cout << smallestNumberGreaterThanDisticntNumber << endl;


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
