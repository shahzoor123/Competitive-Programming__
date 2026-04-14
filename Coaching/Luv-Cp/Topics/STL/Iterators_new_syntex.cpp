#include <bits/stdc++.h>
using namespace std;


int main() {

    // 2 ---- ITERATORS Compact syntex

    // Before

    // vector<pair<int,int>> v_p = {{2,3},{4,5},{6,7}};
    // vector<pair<int,int>> ::iterator it;

    // for (it = v_p.begin(); it != v_p.end(); ++it){

    //     cout << (it->first) << " " << (it->second) << endl;
    // }




    // After 

    // With Vectors

    // vector<int> v = {1,2,3,4,5,6};

    // Passing by reference
    // for (int &value : v){
    //     value++;
    //     // cout << value << " ";
    // }

    // for (int value : v){
    //     // cout << value << " ";
    // }



    // For pairs


    // vector<pair<int,int>> v_p = {{2,3},{4,5},{6,7}};
    // vector<pair<int,int>> ::iterator it;
    
    // for (pair<int,int> &value : v_p){
    //     cout << value.first << value.second << endl;
    // }

    // Auto datatype detection

    // for (auto &value : v_p){
    //     cout << value.first << value.second << endl;
    // }




    // Auto keyword

    // vector<pair<int,int>> v_p = {{2,3},{4,5},{6,7}};
    // // vector<pair<int,int>> ::iterator it;
    
    
    // for (auto it = v_p.begin(); it != v_p.end(); ++it){

    //     cout << (it->first) << " " << (it->second) << endl;
    // }



    // Testing

    vector<pair<int,int>> v_p = {{2,3},{4,5},{6,7}};
    
    
    for (auto &value : v_p){

        cout << value.first << " " << value.second << endl;
    }

}
