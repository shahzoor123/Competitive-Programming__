#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    getline(cin, s);

    map<char, int> freq;

    for (char c : s){
        if(c != '+'){
            freq[c]++;
        }
    }


    string result;

    for (auto it = freq.begin(); it != freq.end(); it++){
        for (int i=0; i < it->second; i++){
            result += it->first;
            result += '+';
        }
    }

    if(!result.empty()){
        result.pop_back();
    }

    cout <<  result << endl;

    

    

}



int main(){

    solve();        


  return 0;
}