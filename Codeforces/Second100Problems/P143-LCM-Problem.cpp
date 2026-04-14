#include<iostream>
using namespace std;
int main(){
  int t, l, r;
 cin>>t;
 for(int i=0;i<t;i++){
  cin>>l>>r;
  if(2*l>r) cout<<-1<<" "<<-1<<endl;
  else cout<<l<<" "<<2*l<<endl;
 }
return 0;
}