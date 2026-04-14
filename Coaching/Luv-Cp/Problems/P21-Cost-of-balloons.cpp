#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Taking input of number of testcases
	int t;
	cin >> t;
	
	while(t--) {

		// Taking input of cost of ballons for every test case
		int b1,b2;
		cin >> b1 >> b2;

		// Taking input for number of participants
		int n;
		cin >> n;

		// initializing an 2d array
		int arr[n][2];


		// This loop is taking input of every participants questions 1 and 2 in an 2d array
		for (int i=0; i<n; i++){
			for (int j=0; j<2; j++){
				// This is puting the values on the right indexs in the 2d array
				cin >> arr[i][j];

			}
		}	

		int green_question_solved = 0;
		int purple_question_solved = 0;

		// calulating the total cost for ballons
		for (int i=0; i<n; i++){

			// cout << arr[i][0];
			if (arr[i][0] == 1) {
				green_question_solved++;
			}
			if (arr[i][1] == 1) {
				purple_question_solved++;
			}
		}

		int cost_option1 = (green_question_solved * b1) + (purple_question_solved * b2);
        int cost_option2 = (green_question_solved * b2) + (purple_question_solved * b1);
		int total_cost = min(cost_option1, cost_option2);

		cout << total_cost << endl;




	
	}


}