#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;

	int b=0;
	if(s=="0"){
		cout<<0;
		return 0;
	}

	int n=s.size();
	for(int i=0;i<n;i++){
		if(s[i]=='1')b++;
	}

	if(b>=2)cout<<(n+1)/2;
	if(b==1)cout<<n/2;
    
	return 0;
}
