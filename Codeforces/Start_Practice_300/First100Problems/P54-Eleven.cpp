#include <bits/stdc++.h>
using namespace std;


int arr[1001] = {0};

void solve() {
    int a;
    cin >> a;

    string name;

    int prev1 = 0, prev2 = 1; 

    // cout << "Integers: " << a << endl;

    while (prev1 <= 1000){
        arr[prev1] = 1;
        int next = prev1 + prev2;
        prev1 = prev2;
        prev2 = next;
    }

    for (auto i=1;i<=a;i++){

        // cout << arr[i];

        if (arr[i] == 1){
            name.push_back('O');
        }
        else{
            name.push_back('o');
        }
        
    }


    cout << name;

}

int main() {
   
    solve();
    return 0;
}
