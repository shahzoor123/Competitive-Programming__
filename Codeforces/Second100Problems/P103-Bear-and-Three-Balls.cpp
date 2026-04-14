#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int n,x,a[1005],f;
int main(){
    
    cin>>n;

    while(n--){
        cin>>x;
        a[x]=1;
    }

    for(int i=1;i<=1000;i++){
        if(a[i]&&a[i+1]&&a[i+2]) f=1;
    }

    if(f) cout<<"YES";
    else cout<<"NO";
    return 0;  
}