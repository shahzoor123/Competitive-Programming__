#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n = 3;

        char row1[n];
        char row2[n];
        char row3[n];

        int bitmask = 0;

        for (int i = 0; i < n; i++) {
            cin >> row1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> row2[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> row3[i];
        }

        // Track which row contains '?'
        int question_row = 0;

        for (int i = 0; i < n; i++) {
            if (row1[i] == '?') {
                question_row = 1;
                break;
            } else if (row2[i] == '?') {
                question_row = 2;
                break;
            } else if (row3[i] == '?') {
                question_row = 3;
                break;
            }
        }


        // cout << question_row << endl;

        if (question_row == 1) {
	        // Create bitmask for the characters present in row2
	        int ascii_present = 0;

	        for (int i = 0; i < n; i++) {
	            if (row1[i] != '?') { // Ignore placeholder characters like '?'
	                ascii_present |= (1 << (row1[i] - 'A'));
	            }
	        }

	        // Check which characters from row1 are missing in row2
	        for (int i = 0; i < n; i++) {
	            if ((ascii_present & (1 << (row2[i] - 'A'))) == 0) {
	                // This character is not present in row2
	                cout << row2[i] << endl;
	            }
	        } 
        }
        else if (question_row == 3) {
        	// Create bitmask for the characters present in row2
	        int ascii_present = 0;

	        for (int i = 0; i < n; i++) {
	            if (row3[i] != '?') { // Ignore placeholder characters like '?'
	                ascii_present |= (1 << (row3[i] - 'A'));
	            }
	        }

	        // Check which characters from row1 are missing in row2
	        for (int i = 0; i < n; i++) {
	            if ((ascii_present & (1 << (row2[i] - 'A'))) == 0) {
	                // This character is not present in row2
	                cout <<  row2[i] << endl;
	            }
	        } 
        	
        }
        else {

        	// Create bitmask for the characters present in row2
	        int ascii_present = 0;

	        for (int i = 0; i < n; i++) {
	            if (row2[i] != '?') { // Ignore placeholder characters like '?'
	                ascii_present |= (1 << (row2[i] - 'A'));
	            }
	        }

	        // Check which characters from row1 are missing in row2
	        for (int i = 0; i < n; i++) {
	            if ((ascii_present & (1 << (row1[i] - 'A'))) == 0) {
	                // This character is not present in row2
	                cout <<  row1[i] << endl;
	            }
	        }

        }




       
    }

    return 0;
}
