#include<bits/stdc++.h>
using namespace std;

int main()
{
	int row, col;
	cin >> row >> col ;
	int a[row][col];

	int row_array[row] = {0};
	int col_array[col] = {0};

	int row_sum = 0;
	int col_sum = 0;


	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++){
			cin >> a[i][j];
			row_array[i] += a[i][j];
			col_array[j] += a[i][j];
		}
	}


    // Check if each row sum equals its respective column sum
    bool allEqual = true;
    for (int i = 0; i < min(row, col); i++) {  // This loop was missing
        if (row_array[i] != col_array[i]) {
            allEqual = false;
            break;
        }
    }


	if (allEqual) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	
	



}