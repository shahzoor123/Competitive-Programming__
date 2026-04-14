#include <bits/stdc++.h>
using namespace std;


void print(map<int,string> &m){
    cout << m.size() << endl;
    for (auto &value : m){
        cout << value.first << " " << value.second << endl;
    }
}




int main() {

    // 3 ---- Maps | access | insert > both are (log n)

    map<int,string> m;

    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";

    m.insert({4, "afg"});

    // map<int ,string> ::iterator it;

    // Long way

    // for (it = m.begin(); it != m.end(); ++it){

    //     cout << (it->first) << (it->second) << endl;
    // }


    // Short way

    // for (auto &value : m){
    //     cout << value.first << " " << value.second << endl;
    // }


    // Map find & erase -> (log n)

    auto it = m.find(5);
    m.erase(it);
    m.clear();
    // if (it == m.end()){
    //     cout << "No value";
    // }
    // else{
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    print(m);


    /* Time complexity of map depend on the size of the input size 
        
        Becasue we cannot like store 10^5 size of the string as key 

        this is the reason 


    */ 

 
}
