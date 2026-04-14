#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n;
    cin >> n;

    string str;
    cin >> str;

    vector<int> assignment_status_arr(10, 0);


    for (int i=0;i<str.size();i++){

        if (str[i] == 'L'){
            for(int j=0;j<10;j++){
                if (assignment_status_arr[j] == 0){
                    assignment_status_arr[j] = 1;
                    break;
                }
            }
            
        }

        else if (str[i] == 'R'){

              for(int j=9;j>=0;j--){
                if (assignment_status_arr[j] == 0){
                    assignment_status_arr[j] = 1;
                    break;
                }
            }

        }

        else
        {
            int leaving_customers = str[i] - '0';
            assignment_status_arr[leaving_customers] = 0;
        }
    }


    for (int i=0;i<10;i++){
        
        cout << assignment_status_arr[i];
       
    }
}

int main() {

    solve();
    return 0;
}
