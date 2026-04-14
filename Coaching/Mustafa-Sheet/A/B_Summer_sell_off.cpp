#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,f;
    cin >> n >> f;

    vector<pair<int, pair<int,int>>> a;
    for (int i = 0; i < n; i++) {
        int k,l;
        cin >> k >> l;
        int gain = min(2*k, l) - min(k,l);
        a.push_back({gain, {k,l}});
    }

    sort(a.rbegin(), a.rend());

    long long totalsell = 0;

    for (int i = 0; i < n; i++) {
        int k = a[i].second.first;
        int l = a[i].second.second;

        if(i < f){
            totalsell += min(2 *k,l);
        }
        else{
            totalsell += min(k,l);
        }
    }
    

    cout << totalsell << endl;


    
}

int main(){

    solve();        
    return 0;
}
