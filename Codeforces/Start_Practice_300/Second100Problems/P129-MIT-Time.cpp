#include<bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;

	while (t--){
		long long n;
		cin >> n;

		

		if (n <= 5){
			cout << "MIT time" << endl;
			continue;
		} 

		vector<int> arr;

		for (long long i=1;i<n; i *= 5){
			arr.push_back(i);
			
		}

		int powerIndex = arr.size();

		cout << "MIT^" << powerIndex << " time" << endl;
		
		
	
	}

	return 0;

}

