#include<iostream>
using namespace std;
const int N=55;
int videos_duration[N],entertainment_value[N];

void solve() {

	int n,t;
	cin >> n >> t;

	for (int i=1;i<=n;i++){
		cin >> videos_duration[i];
	}


	for (int i=1;i<=n;i++){
		cin >> entertainment_value[i];
	}



	int maxx = 0;
	int k = 0;



    for (int i=1;i<=n;i++) {

   		if (i-1+videos_duration[i]<=t) {
            if (entertainment_value[i]>maxx) {
                maxx = entertainment_value[i];
                k = i;
            }
        }

    }
	
    if (!maxx){
    	cout << -1 << endl;
    }
    else{
    	cout << k << endl;
    }
 	
	





}




main() {
	int t;
	cin >> t;

	while (t--){
		solve();
	}


}