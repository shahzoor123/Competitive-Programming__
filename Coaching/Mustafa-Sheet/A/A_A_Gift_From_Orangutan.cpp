#include <bits/stdc++.h>
using namespace std;
int t,n;
int arr[1001];
int main(){
cin>>t;
while(t--){
cin>>n;
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr,arr+n);
cout<<(arr[n-1]-arr[0])*(n-1)<<endl;;
}
 
 
}