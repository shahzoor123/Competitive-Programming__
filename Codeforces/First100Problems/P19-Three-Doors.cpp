#include<bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;


	while (t--){

		int x;
		cin >> x;

		int original_x = x;
		x -= 1;


		int doors = 3;
		int current_doors_keys[doors];
		


		for (int i=0;i<doors;i++){
			cin >> current_doors_keys[i];
		}


		int can_open_all_doors = 0;

		while (x == -1 || current_doors_keys[x] != 0){
		
			int new_key = current_doors_keys[x];
			current_doors_keys[x] = 0;
			x = new_key - 1;
			can_open_all_doors++;


		}

		if(can_open_all_doors == 2){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}


	}


}