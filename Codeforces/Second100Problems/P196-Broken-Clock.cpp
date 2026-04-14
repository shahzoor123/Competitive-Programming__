#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main() {
    int format;
    string s;
    cin >> format >> s;

    string best_time;
    int min_changes = INT_MAX;

    if (format == 24) {
        for (int h = 0; h <= 23; ++h) {
            string hh_str;
            if (h < 10) {
                hh_str = "0";
                hh_str += to_string(h);
            } else {
                hh_str = to_string(h);
            }
            for (int m = 0; m <= 59; ++m) {
                string mm_str;
                if (m < 10) {
                    mm_str = "0";
                    mm_str += to_string(m);
                } else {
                    mm_str = to_string(m);
                }
                string candidate = hh_str + ":" + mm_str;
                int changes = 0;
                if (s[0] != candidate[0]) changes++;
                if (s[1] != candidate[1]) changes++;
                if (s[3] != candidate[3]) changes++;
                if (s[4] != candidate[4]) changes++;
                if (changes < min_changes) {
                    min_changes = changes;
                    best_time = candidate;
                }
            }
        }
    } else { // 12-hour format
        for (int h = 1; h <= 12; ++h) {
            string hh_str;
            if (h < 10) {
                hh_str = "0";
                hh_str += to_string(h);
            } else {
                hh_str = to_string(h);
            }
            for (int m = 0; m <= 59; ++m) {
                string mm_str;
                if (m < 10) {
                    mm_str = "0";
                    mm_str += to_string(m);
                } else {
                    mm_str = to_string(m);
                }
                string candidate = hh_str + ":" + mm_str;
                int changes = 0;
                if (s[0] != candidate[0]) changes++;
                if (s[1] != candidate[1]) changes++;
                if (s[3] != candidate[3]) changes++;
                if (s[4] != candidate[4]) changes++;
                if (changes < min_changes) {
                    min_changes = changes;
                    best_time = candidate;
                }
            }
        }
    }

    cout << best_time << endl;
    return 0;
}