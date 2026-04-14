#include <bits/stdc++.h>
using namespace std;

int main() {

    // 4 ---- Multi Sets ---- also O(logn) time comp we can use where order does not matter

    // multiset<string> s;

    // s.insert("bc");
    // s.insert("aa");
    // s.insert("ac");
    // s.insert("aa");
    

    // This will erase only one value of that iterator
    // auto it = s.find("aa");
    // if (it != s.end()){
    //     s.erase(it);
    // }

    // This will remove all instances on the str
    // s.erase("aa");

    // for (string value : s){
    //     cout << value << endl;
    // }



    // 1 question on multiset  -- Monk and magical candy bags

    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >>n >> k;
        multiset<long long> bags;

        for (auto i=0;i<n;i++){
            long long candy_ct;
            cin >> candy_ct;
            bags.insert(candy_ct);
        }

        long long total_candies = 0;

        for (auto i=0;i<k;i++){
           auto last_it = (--bags.end());
           long long candy_ct = *last_it;
           total_candies += candy_ct;
           bags.erase(last_it);
           bags.insert(candy_ct/2);

        }

        cout << total_candies << endl;

    

    }

    


  
 

   
}
