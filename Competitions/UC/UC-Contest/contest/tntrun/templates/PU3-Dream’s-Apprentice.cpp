#include <bits/stdc++.h>
using namespace std;



string solve(int N, char S[] , char E[] ) {

	bool answer = true;
	int count = 0;

	for (int i=0; i<N; i++){
		char s = S[i];
		char e = E[i];

		if (s == '-' && e == '#'){
			answer = false;
		} 

		if (s == '#' && e == '-'){
			count = 0;
		}

	 	if (s == e) {
            count += 1;
            if (count > 4) {
                answer = false;
                break;
            }
        }

	}

	if (answer) {
		return "YES";
	}
	else {
		return "banned";
	}


}




int main() {
	// your code goes here
	int t;
	cin >> t;

	while(t--){

		int N;
		cin >> N;

		char S[N];

		for (int i=0; i<N; i++){
			cin >> S[i];
			
		}

		char E[N];

		for (int j=0; j<N; j++) {
			cin >> E[j];
		
		}


		cout << solve(N, S, E) << endl;
			
	}

	return 0;

}
