#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;cin>>a>>b;
int mn=min(a,b);
int fac =1;
for(int i=1;i<=mn;i++){
    fac=fac*i;
}
cout << fac << endl;
return 0;
}