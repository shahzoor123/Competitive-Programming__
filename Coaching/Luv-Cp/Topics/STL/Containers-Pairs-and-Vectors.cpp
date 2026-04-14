#include <bits/stdc++.h>
using namespace std;


int main() {

    // 1 ---- Pairs

    // pair<int, string> p;

    // // p = make_pair(2, "ABC");
    // p = {2, "ABC"};
    // pair<int, string> p1 = p;

    // int a[] = {1,2,3};
    // int b[] = {2,3,4};

    // pair<int, int> p_array[3];

    // for (int i=0;i<3;i++){
    //     p_array[i] = {a[i],b[i]};
    // }

    // for (int i=0;i<3;i++){
    
    //     cout << p_array[i].first << p_array[i].second << endl;
    // }

    // cout << p.first << p.second << endl;



    // 2 --- Vectors


    // vector<int> v;
    
    // int n;
    // cin >> n ;

    // for (int i=0;i<n;i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // vector<int> v2 = v;
    // // v.pop_back();
    // v2.push_back(10);
    
    // // for (int i=0;i<v.size();i++){
    
    // //     cout << v[i] << endl;


    // // }

    // for (int i=0;i<v2.size();i++){

    //     cout << v2[i] << endl;

    // }


    // 2 --- Nesting In Vectors



    // Vectors of pairs


    // vector<pair<int,int>> v = {{1,2},{2,3},{4,5}};

    // for (int i=0;i<v.size();i++){

    //     cout << v[i].first << " " << v[i].second << endl;

    // }



    // Arrays of vector



    // int N;
    // cin >> N; 
    
    // vector<int> arr[N]; 

   
    // for (int i = 0; i < N; i++) {
    //     int size;
    //     cin >> size; 
    //     for (int j = 0; j < size; j++) {
    //         int x;
    //         cin >> x;
    //         arr[i].push_back(x); 
    //     }
    // }

    
    // for (int i = 0; i < N; i++) {
    //     cout << "Vector " << i + 1 << ": ";
    //     for (int j = 0; j < arr[i].size(); j++) { 
    //         cout << arr[i][j] << " "; // Access elements using indices
    //     }
    //     cout << endl;
    // }





    // Vector of Vectors if also want to make rows of vectors dynamic



    int N;
    cin >> N; 
    
    vector<vector<int>> v; 

   
    for (int i = 0; i < N; i++) {

        int size;
        cin >> size; 
        vector<int> temp;

        for (int j = 0; j < size; j++) {
            int x;
            cin >> x;
            temp.push_back(x); 
        }
        v.push_back(temp);
    }

    
    for (int i = 0; i < N; i++) {
        cout << "Vector " << i + 1 << ": ";
        for (int j = 0; j < v[i].size(); j++) { 
            cout << v[i][j] << " "; // Access elements using indices
        }
        cout << endl;
    }

    
}
