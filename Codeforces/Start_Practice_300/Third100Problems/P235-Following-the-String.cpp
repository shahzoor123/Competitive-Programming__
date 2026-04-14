#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;


    map<char, int> freq;
    for (char ch = 'a'; ch <= 'z' ; ch++){
        freq[ch] = 0;
    }


    for (int i : a){
        for (char ch = 'a'; ch <= 'z' ; ch++){
            if(freq[ch] == i){
                cout << ch;
                freq[ch]++;
                break;  
            } 
        }

    }

    cout << endl;
 
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
