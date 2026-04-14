#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T--){
      string s,a;
      int l;
      cin>>l>>s;

      for(int i=1;i<l-2;i++){
        cin>>a;
        if(a[0]==s.back())s+=a[1];
        else s+=a;
      }
      
      cout<<s;
      for(int i=l;i>s.size();i--)cout<<'a';
      cout<<'\n';
  }
}