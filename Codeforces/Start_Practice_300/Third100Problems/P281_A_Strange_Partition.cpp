#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,x;
    cin >> n >> x;

    vector<long long> v(n);
    long long s=0,s1=0;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
        s=s+ceil((v[i]*1.0)/x);
	    s1+=v[i]; 
    }

    cout<<(long long)ceil((s1*1.0)/x)<<" "<<s<<endl;

    
}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
