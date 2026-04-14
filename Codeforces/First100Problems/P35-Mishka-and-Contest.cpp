#include<bits/stdc++.h>
using namespace std;

void solve() {

	int n,k;
	cin >> n >> k;


	int arr[n];

	int left = 0, right = n - 1, cnt = 0;

	for (int i=0;i<n;i++){
		cin >> arr[i];
	}
	

	while (left <= right){

		if (arr[left] <= k) {
			cnt++;
			left++;
		}

		else if (arr[right] <= k){
			cnt++;
			right--;
		}

		else{
			break;
		}
		
	}

	cout << cnt << endl;


}


main() {

	solve();
	

}