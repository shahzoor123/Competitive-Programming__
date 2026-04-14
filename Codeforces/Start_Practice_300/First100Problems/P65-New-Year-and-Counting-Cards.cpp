#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s; 

    
    int minimium_fliped_cards = 0;

    vector<char> arr_ovel = {'a','e','i','o','u'};
    vector<char> arr_odd = {'1','3','5','7','9'};

    for (int i=0;i<s.size();i++){

        char ch = s[i];

        if (find(arr_ovel.begin(), arr_ovel.end(), ch) != arr_ovel.end()){
               minimium_fliped_cards++;
        }
       
        else if (find(arr_odd.begin(), arr_odd.end(), ch) != arr_odd.end()){
               minimium_fliped_cards++;
        }
    }

    cout << minimium_fliped_cards << endl;



}

int main() {
    

    solve();
    
    return 0;
}
