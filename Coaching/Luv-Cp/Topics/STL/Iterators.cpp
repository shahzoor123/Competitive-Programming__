#include <bits/stdc++.h>
using namespace std;


int main() {

    // 1 ---- ITERATORS

    vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < v.size(); i++) {
        

    }
    
    // vector<int> ::iterator it = v.begin();
    // cout << (*(it+1)) << endl;

    // for (it = v.begin(); it != v.end(); ++it){

    //     cout << (*it) << endl;
    // }


    // Pairs using iterators syntex first


    // vector<pair<int,int>> v_p = {{2,3},{4,5},{6,7}};
    // vector<pair<int,int>> ::iterator it;

    // for (it = v_p.begin(); it != v_p.end(); ++it){

    //     cout << (*it).first << " " << (*it).second << endl;
    // }


    // Pairs using iterators syntex second

    vector<pair<int,int>> v_p = {{2,3},{4,5},{6,7}};
    vector<pair<int,int>> ::iterator it;

    for (it = v_p.begin(); it != v_p.end(); ++it){

        cout << (it->first) << " " << (it->second) << endl;
    }

}
