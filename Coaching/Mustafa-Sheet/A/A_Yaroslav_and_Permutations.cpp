#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    map<int,int> freq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++; 
    }

  
    int maxFreq = 0;
    for (auto &x : freq) {
        maxFreq = max(maxFreq, x.second);
    }

    if(maxFreq <= (n+1) / 2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

int main(){
   
    solve();        
    return 0;
}
