#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin >> n >> k;

    if(n*n-k==1){
        cout << "NO" << endl;
        return;
    }


    cout << "YES" << endl;
    int cnt = 0;

    for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(cnt<k){
					cout<<'U';
					cnt++;
				}
				else{
					if(i==n&&j==n)cout<<'L';
					else if(j!=n)cout<<'R';
					else cout<<'D';
				}
			}
			cout<<endl;
		}
}



int main(){

  int t;
  cin >> t;

  while(t--){
    solve();        
  } 

  return 0;
}