#include <bits/stdc++.h>
using namespace std;

int mex(vector<int> &a){
    unordered_set<int> s(a.begin(), a.end());
    int m = 0;
    while(s.count(m)) m++;
    return m;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n),ff(n+1,0);
        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i =0;i<n;i++){
            ff[a[i]]++;
        } 

        if(ff[0] == 1) cout<<"YES"<<endl;

        else if(ff[0] > 0 && ff[1] > 0) cout<<"YES"<<endl;
        
        else cout<<"NO"<<endl;

    }
    return 0;
}
