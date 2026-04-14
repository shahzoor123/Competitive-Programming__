#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){

        string str;
        cin >> str;



        int countA = 0;
        int countB = 0;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'A'){
                countA++;
            }
            else{
                countB++;
            }
        }

        if (countA > countB){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
        

    }
    
    return 0;
}
