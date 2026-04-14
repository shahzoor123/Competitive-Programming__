#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, string>> books(n);

        for (int i = 0; i < n; i++) {
            cin >> books[i].first >> books[i].second;
        }

        int minTime00 = INT_MAX;
        int minTime01 = INT_MAX;
        int minTime10 = INT_MAX;
        int minTime11 = INT_MAX;

        for (int i = 0; i < n; i++) {
            int time = books[i].first;
            string skills = books[i].second;

            if (skills == "00"){
                minTime00 = min(minTime00, time);
            }
            else if (skills == "01"){
                minTime01 = min(minTime01, time);
            }
            else if (skills == "10"){
                minTime10 = min(minTime10, time);
            }
            else{
                minTime11 = min(minTime11, time);
            }

        }


        int result = INT_MAX;

        if (minTime11 != INT_MAX) {
            result = min(result, minTime11);
        }

        
        if(minTime10 != INT_MAX && minTime01 != INT_MAX){
            result = min(result, minTime10 + minTime01);
        }

        if (result == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << result << endl;
        }


    }

    return 0;
}















// N^2 solution

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<pair<int, string>> books(n);

//         for (int i = 0; i < n; i++) {
//             cin >> books[i].first >> books[i].second;
//         }

//         int time = INT_MAX;

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (i == j) continue;


//                 string combinedSkills = "";
//                 combinedSkills += books[i].second[0];
//                 combinedSkills += books[j].second[1]; 

//                  if(combinedSkills == "11"){
//                     int currentTime = books[i].first + books[j].first;
//                     if (currentTime < time){
//                         time = currentTime;
//                     }
//                  }
            
                
//             }
//         }

//         for (int i = 0; i < n; i++) {
//             if (books[i].second == "11") {
//                 if (books[i].first < time) {
//                     time = books[i].first;
//                 }
//             }
//         }


//         if (time == INT_MAX) {
//             cout << -1 << endl;
//         } else {
//             cout << time << endl;
//         }


//     }

//     return 0;
// }
