#include <bits/stdc++.h>
using namespace std;


int digitSum(string s){

    int y = 0;
    for (int i=0;i<s.size();i++){
        y += s[i] - '0';
    }
    return y;
}


void solve(){
    string convert;
    cin >> convert;

    int x = convert.size();
    int totalSpells = 0;

    if (x == 1) {
        cout << 0 << endl;
        return;
    }

    while(x > 1){

        int sumValue = digitSum(convert);
        convert = to_string(sumValue);
        x = convert.size();
        totalSpells++;

    }


    cout << totalSpells << endl;



    

}



int main(){

  solve();      
  return 0;
}