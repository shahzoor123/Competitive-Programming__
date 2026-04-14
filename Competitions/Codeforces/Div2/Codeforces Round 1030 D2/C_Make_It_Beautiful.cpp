#include<bits/stdc++.h>
using namespace std;
#define int long long  

bool cmp(int a,int b){
	return a>b;
}

void solve(){
    int n,k;
    cin >> n >> k;


    // 1 - check if by increasing any element by 1
    // 2 - does it less the on bit 
    // 3 - if it does then continue
    // 4 - else if make k element increate by 1 
    // 5 - which element will increase the on bits 

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    int cnt=0;
    for(int i=0;i<60;i++){
        for(int j=0;j<n;j++){
            if((a[j]>>i)&1) cnt++;
            else if(k>=(1ll<<i)){
                int  tmp=(1ll<<i);
                k-=tmp;
                cnt++;
            }
        }
    }
	cout<<cnt<<endl;
    
}

signed main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
