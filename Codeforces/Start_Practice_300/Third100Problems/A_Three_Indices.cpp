#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];  
    }

    bool flag = true;

    for(int j=2;j<=n-1;j++){
			if(a[j]>a[j-1]&&a[j]>a[j+1]){
				flag = true;
				cout<<"YES"<<endl;
				cout<<j-1<<" "<<j<<" "<<j+1<<endl;
				break;
			}
			else flag = false;
		}
	if(!flag) cout<<"NO"<<endl;
}


int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}
