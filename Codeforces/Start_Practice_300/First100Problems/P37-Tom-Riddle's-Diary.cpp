#include <bits/stdc++.h>
using namespace std;

int main() {


    int n;
    cin >> n;

    vector<string> seen(n);
    string name;


    for (int i=0;i<n;i++){
        cin >> name;

        if (find(seen.begin(), seen.end(), name) != seen.end()){
               cout << "YES" << endl; // Name exists
        } else {
            cout << "NO" << endl;  // Name does not exist
            seen.push_back(name);
        }
   
    }



    return 0;
}
