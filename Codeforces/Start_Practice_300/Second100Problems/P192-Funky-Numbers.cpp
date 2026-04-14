#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef map<int,int> mii;
#define nn '\n'
#define ll long long
 

int main(){

    ll n; 
    cin>>n;

    bool f=0;

    for(int i=1;i*(i+1)<=n;i++){
      int j=sqrt(2*n-i*(i+1));
      if((i*(i+1))+(j*(j+1))==2*n){
        cout<<"YES";return 0;
      }
    }
    
    cout<<"NO";
}