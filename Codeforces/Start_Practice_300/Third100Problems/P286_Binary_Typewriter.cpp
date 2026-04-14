#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int cnt=n,sum=0;
    for(int i=0;i<n;i++){
        if(i==0&&s[i]=='1'){
            cnt++;
            sum++;
        }
        if(i>0&&s[i]!=s[i-1]){
            cnt++;
            sum++;
        }
    }
    
    if(sum<2){
        cout<<cnt<<endl;
    }else if(sum==2){
        cout<<cnt-1<<endl;
    }else{
        cout<<cnt-2<<endl;
    }

}

int main(){
    int t;
    cin >> t;

    while (t--) {
        solve();        
    } 

    return 0;
}


































// O(n^3)


// #include <bits/stdc++.h>
// using namespace std;

// int countOperations (const string &s){
    
//     int operations = 0;
//     char current_button = '0';

//     for (char c : s){
//         if(c == current_button){
//             operations += 1;
//         }
//         else{
//             operations += 2;
//             current_button = c;
//         }
//     }

//     return operations;
// }





// void solve(){
//     int n;
//     cin >> n;
    
//     string s;
//     cin >> s;


//    int original_cost = countOperations(s);

//     int transitions = 0;
//     for (int i = 1; i < n; ++i) {
//         if (s[i] != s[i - 1]) transitions++;
//     }

   
//     int gain = min(2, transitions);
//     int minimal_cost = original_cost - gain;

//     cout << minimal_cost << endl;
    
// }

// int main(){
//     int t;
//     cin >> t;

//     while (t--) {
//         solve();        
//     } 

//     return 0;
// }
