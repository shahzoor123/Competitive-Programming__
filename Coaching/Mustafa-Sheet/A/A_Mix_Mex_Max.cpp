#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<int>s;
        bool u=true;
        while(n--){
        int x;cin>>x;
            if(x==0)
                u=false;
            else if(x!=-1)
                s.insert(x);
            }
            cout<<((!u||s.size()>1)?"NO\n":"YES\n");
 
}
return 0;
}