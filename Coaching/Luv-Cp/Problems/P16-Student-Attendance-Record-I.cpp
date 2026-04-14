#include <bits/stdc++.h>
using namespace std;


int main() {

	string s;
	cin >> s;

	int Absent_count = 0;
	int Late_count = 0;
	bool isconsective_Late = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'P') {
            // Optional: You can increment Present_count if you need it for other logic
        }
        else if (s[i] == 'L') {
            // Check for 3 consecutive 'L's
            if (i <= s.size() - 3 && s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L') {
                isconsective_Late = true;
                break;
            }
        }
        else if (s[i] == 'A') {
            Absent_count++;
        }
    }

	if (Absent_count < 2 && !isconsective_Late) {
		 cout << "true";
	}
	else {
		 cout << "false";
	}





}


