#include<bits/stdc++.h>
using namespace std;

void solve() {

	int n;
	cin >> n;
	vector<int> forbidden_digits(n);

	for (int i=0;i<n;i++){
		cin >> forbidden_digits[i];
	}


	// Define all possible digits
	set<int> all_digits = {0,1,2,3,4,5,6,7,8,9};

	for (int d : forbidden_digits){
		all_digits.erase(d);

	}


	// cout << "Usable digits: ";
    // for (int d : all_digits) {
    //     cout << d << " ";
    // }
    // cout << endl;


	// Convert the set to a vector for easier processing
    vector<int> usable_digits(all_digits.begin(), all_digits.end());
    int usable_count = usable_digits.size();



  	if (usable_count < 2) {
        cout << 0 << endl;
        return;
    }

    // Calculate the number of pairs of usable digits (C(n, 2))
    int pairs = (usable_count * (usable_count - 1)) / 2;

    cout << pairs * 6 << endl;




}




main() {
	int t;
	cin >> t;

	while (t--){
		solve();
	}


}







/* 

In this code, the combinatorics is used in the following part to
 calculate the number of pairs of usable digits:

int pairs = (usable_count * (usable_count - 1)) / 2;

Combinatorics Concept:

This line calculates 𝐶(𝑛,2) , which is the number of ways to choose 2
distinct digits from the usable_digits set.
This is a standard combination formula:


C(n,k)= n!/k!⋅(n−k)!





*/