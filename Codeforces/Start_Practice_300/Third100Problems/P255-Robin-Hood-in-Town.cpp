#include<bits/stdc++.h>
#define ll long long
using namespace std; 
ll a[200010],t,n,sum,p,m;
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(n<=2){
            cout<<"-1\n";continue;
        }
        sort(a+1,a+1+n);
        p=a[n/2+1];
        m=p*2*n+1;
        ll ck=0;
        cout<<max(ck,m-sum)<<endl;
    }
}