#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;




int calculate_time(const string& str) {
    int time = 2; 
    for (int i = 1; i < str.size(); i++) {
        if (str[i] == str[i - 1]) {
            time += 1; 
        } else {
            time += 2; 
        }
    }
    return time;
}


int main() {
    int t;
    cin >> t; 



    while (t--) {
        string str;
        cin >> str;

        int total_time = 0;
        int index = -1;

        for (int i = 0; i < str.size() - 1; i++) {
            if (str[i + 1] == str[i]) {
                index = i + 1;
                break;
            }
        }

        if (index == -1) {
            index = str.size();
        }


       
        bool inserted = false;
        for (char randomLetter = 'a'; randomLetter <= 'z'; ++randomLetter) {
           
            if (randomLetter != str[index - 1] && randomLetter != str[index] && randomLetter != str[index + 1]) {
                str.insert(index, 1, randomLetter);
                inserted = true;
                break;
            } else if (randomLetter == str[index - 1] || randomLetter == str[index] || randomLetter == str[index + 1]) {
               
                continue;
            }
        }

     

        if (!inserted) {
            // If no suitable letter was inserted, insert a default character (e.g., 'a')
            str.insert(index, 1, 'a');
        }

        cout << str << endl;

   

   }
    return 0;
}

