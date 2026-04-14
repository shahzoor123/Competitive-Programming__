#include<bits/stdc++.h>
using namespace std;

main() {
	int t;
	cin >> t;


	while (t--){


		string str;
		cin >> str;


		if (str == "abc"){
			cout << "YES" << endl ;
		
		}


		else if (str[0] == 'a'){


				char first = str[1];
				str[1] = str[2];
				str[2] = first;

				if (str == "abc") {
					cout << "YES" << endl;
				}
				else {
					cout << "NO" <<  endl;
				}		
		}
	

		else if (str[1] == 'a'){

				char second = str[1];
				str[1] = str[0];
				str[0] = second;

				if (str == "abc") {
					cout << "YES" << endl;
				}
				else {
					cout << "NO" <<  endl;
				}

			}

		
		else if (str[2] == 'a'){

			
			char third = str[2];
			str[2] = str[0];
			str[0] = third;

			if (str == "abc") {
					cout << "YES" << endl;
				}
			else {
					cout << "NO" <<  endl;
			}

		

		} 

		else {

			
			cout << "NO" <<  endl;
		

		}
			
			}
	
		// }
	
	// }

}