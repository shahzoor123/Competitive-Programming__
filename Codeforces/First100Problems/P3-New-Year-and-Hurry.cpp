#include<bits/stdc++.h>
using namespace std;

main() {
	long long int n,k;
	cin >> n >> k;

	int total_time_for_all_problems = 0;
	int total_time = 240;
	int remaining_time = total_time - k;
	int possible_problem_solved = 0;


	for (int  i=1;i<=n;i++){

		int every_problem_time = 5 * i;
		total_time_for_all_problems += every_problem_time;
		int result = remaining_time - total_time_for_all_problems;
		
		// cout << "i = " << i << 
		// " each_time "<< every_problem_time << 
		// " Total " << total_time_for_all_problems << " remain "<<
		// result << endl;

		if ( total_time_for_all_problems <= remaining_time) {
			possible_problem_solved = i;
		}
		else {

			break;
		}
		
		
	}

	

	cout << possible_problem_solved;

	

}