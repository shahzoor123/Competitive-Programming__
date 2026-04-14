#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];


    map<int,int> freq;
    int largestFrequency = 0;
    for(int x : a){
        freq[x]++;
        largestFrequency = max(largestFrequency, freq[x]); 
    }           

    int maxSubSequence = 0;

    for(int x=1; x<=largestFrequency; x++){
        int cnt = 0;
        for(auto &p : freq){
            if(p.second >= x) cnt++;
        }
        maxSubSequence = max(maxSubSequence, cnt * x);
    }

    cout << maxSubSequence << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
