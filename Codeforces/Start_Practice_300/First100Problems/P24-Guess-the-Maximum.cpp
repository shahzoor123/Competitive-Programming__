#include<bits/stdc++.h>
using namespace std;



main() {
	int t;
	cin >> t;

	while (t--){
		int x;
		cin >> x;

		int array[x];
		
		for (int i=0;i<x;i++){
			cin >> array[i];
		}

		int mini = max(array[0], array[1]);

		cout << "mini "<< mini << endl;

		for (int i = 1; i < x - 1; i++) { 
			mini = min(mini, max(array[i], array[i + 1]));
			cout <<  mini << endl;

		}
	
 	 	// cout << mini - 1 << "\n";

	}

}


/* 

Why This Solution Works:

1 - Greedy Approach: The algorithm uses a greedy strategy where 
 	iteratively find the smallest "maximum" value from all 
 	adjacent pairs. By focusing on adjacent pairs, the 
 	solution is optimal and efficient.


2 - Time Complexity: The time complexity of this solution is 𝑂(𝑛) O(n) 
	for each test case because we only iterate through the array once to compute
 	the maximums of adjacent pairs. Since there are at most 10^4 
 	test cases, and the sum of n over all test cases is limited to 5×10^4
    this approach will run efficiently within the given constraints.


3 - Space Complexity: The space complexity is 𝑂(𝑛) because of the array storage,
 	but no additional complex data structures are used, making the solution
  	memory efficient.


 In summary, the code efficiently computes the answer by considering only
 adjacent pairs, finding the smallest maximum among them, and then returning
 the result after subtracting 1. This approach works within the problem's
 constraints and provides the correct result.

*/