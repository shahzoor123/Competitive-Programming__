#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;cin>>n>>k;
int a[n],c=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if((a[i]+k)<=5)c++;
}
if(3<=c)cout<<c/3;
else cout<<0;
}
