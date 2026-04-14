#include<bits/stdc++.h>
using namespace std;

main() {
	

	int r,c;
	cin >> r >> c;

	char grid[r][c];

	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			cin >> grid[i][j];

		}
	}
	

	bool skipRow[r] = {false};
    bool skipCol[c] = {false};

	int cakeminator = 0;


	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			if (grid[i][j] == 'S') {

				skipRow[i] = true;
				skipCol[j] = true;


			}
		}
	}


	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){

			if (!skipRow[i] || !skipCol[j]) { // Either row or column must be clear of 'S'
                if (grid[i][j] == '.') {
                    cakeminator++;
                }
            }
			
		}
	}
	cout << cakeminator << endl;


}