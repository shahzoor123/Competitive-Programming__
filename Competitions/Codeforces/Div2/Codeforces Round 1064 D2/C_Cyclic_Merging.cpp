#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    long long cost=0;
	    int num=0;
	    for(int i=0;i<n;i++){
	        int k=max(arr[i],arr[i+1==n?0:i+1]);
	        cost+=k;
	        num=max(num,k);
	    }
	    cout<<cost-num<<endl;
	}
}

