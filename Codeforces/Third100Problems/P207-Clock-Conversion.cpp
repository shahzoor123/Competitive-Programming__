#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin >> str; 

    string converted = "";

    int hours = stoi(str.substr(0,2));
    string mins = str.substr(3,5);


    if (hours >= 13){
        if (hours - 12 > 9){
            cout << hours - 12 << ":" << mins << " PM" << endl;
        }
        else{
            cout << 0 << hours - 12 << ":" << mins << " PM" << endl;
        }
        
    }
    else if (hours == 0) {
        cout << "12" << ":" << mins << " AM" << endl;
    }
    else if (hours == 12){
            cout << hours << ":" << mins << " PM" << endl;
    }
    else{
         if (hours > 9){
            cout << hours << ":" << mins << " AM" << endl;
        }
        else{
            cout << 0 << hours << ":" << mins << " AM" << endl;
        }
    }

    

}


int main() {

    int t;
    cin >> t;
    
    while (t--) {
        
        solve();
       
    }

    return 0;
}
