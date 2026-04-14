#include <iostream>
using namespace std;

int main() {
    int F1, P1, F2, P2;
    cin >> F1 >> P1 >> F2 >> P2;

    if (abs(F1 - P1) > abs(F2 - P2)){
        cout << "Second" << endl;
    }
    else if (abs(F1 - P1) < abs(F2 - P2)){
        cout << "First" << endl;
    }
    else{
        cout << "Both" << endl;
    }
  

  

    

    return 0;
}
