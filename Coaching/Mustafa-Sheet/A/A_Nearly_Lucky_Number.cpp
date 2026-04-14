#include<bits/stdc++.h>
using namespace std;


int main(){

    int c=0;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='7' or s[i]=='4') c++;
    }

    if(c==7 or c==4) cout<<"YES";
    else cout<<"NO";

}