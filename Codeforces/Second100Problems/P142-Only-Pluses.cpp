#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
	while(t--){
		int a,b,c;
		int k=5;
		cin>>a>>b>>c;

		for (int i=0;i<k;i++){
			if (a<=b && a <= c) a++;
			else if (b<=c && b <=a) b++;
			else c++;
		}
		cout << a * b * c << endl; 
		
	}
}



