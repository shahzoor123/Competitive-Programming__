#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n, m, x , y;
		cin >> n >> m;
		int prev = 0, pos = 0;
		ll points = 0;
		for(int i=0;i<n;i++){
	        cin >> x >> y;
			if(y == pos) points += (x-prev) - ((x-prev)%2);
            else points += (x-prev) - (1 - (x-prev)%2);

            prev = x;
            pos = y;
        }
		
        points += (m - prev);

		cout << points << endl;
	}
}	 