#include <iostream>
#include <string>

using namespace std;


bool isLucky(int hh, int mm) {
    string h = to_string(hh);
    string m = to_string(mm);
    if (h.find('7') != string::npos || m.find('7') != string::npos) {
        return true;
    }
    return false;
}


int findMinimumSnoozes(int x, int hh, int mm) {
    int snoozes = 0;


    while (!isLucky(hh, mm)) {
        mm -= x; 
        if (mm < 0) {
            mm += 60; 
            hh--;
            if (hh < 0) {
                hh = 23;
            }
        }
        snoozes++;
    }

    return snoozes;
}

int main() {
    int x, hh, mm;
    
    cin >> x;
    cin >> hh >> mm;

    cout << findMinimumSnoozes(x, hh, mm) << endl;

    return 0;
}
