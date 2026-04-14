#include <bits/stdc++.h>
using namespace std;
const int N = 1e2+10;


class Solution {
public:
    
    vector<int> findMissing(vector<int>& a, vector<int>& b, int n, int m) {

        // if the values were only positive than use this approach

        // int hshb[N] = {0};
        // vector<int> final_vector;

        

        // for (int j=0;j<m;j++){
        //     hshb[b[j]]++;

        // }

        // for (int i=0;i<n;i++){
        //     if (hshb[a[i]] == 0){
        //         final_vector.push_back(a[i]);
        //         // cout << i << endl;

        //     }  
        // }





        // if the values were large positive & negative than use this approach

        unordered_set <int> s;
        vector<int> final_vector;

        

        for (int i=0;i<m;i++){
            s.insert(b[i]);

        }

        for (int i=0;i<n;i++){
            if (s.find(a[i]) == s.end()){
                final_vector.push_back(a[i]);

            }  
        }

        return final_vector;
    }
};

int main() {
    int n = 6, m = 5;
    vector<int> a = {-1, 2, 3, 4, 5, 10};
    vector<int> b = {2, 3, 1, 0, 5};

    Solution sol;
    vector<int> result = sol.findMissing(a, b, n, m);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
