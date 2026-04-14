
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int y, b, r;
    cin >> y >> b >> r;

    // Find the maximum number of yellow ornaments that can be used
    int max_y = min({y, b - 1, r - 2});

    // Calculate the total number of ornaments used
    int max_ornaments = 3 * max_y + 3;

    cout << max_ornaments << endl;
}

int main() {
    solve();
    return 0;
}


// Very Long approach



// #include <bits/stdc++.h>
// using namespace std;


// void solve() {
//     int y, b, r;
//     cin >> y >> b >> r;

    
//     if (b > y and b > r){

//         y = y - 1;
//         b = y + 1;
//         r = b + 1;

//         cout << (y + b + r) << endl;
       
//     }

//     else if (y > b and y > r){

//         y = b - 1;
//         r = b + 1;

//         cout << (y + b + r) << endl;
       
//     }

//     else if (r > b and r > y){

//         b = y + 1;
//         r = b + 1;

//         cout << (y + b + r) << endl;
       
//     }

//     else if (y == b and b == r ){

//         y = y - 2;
//         b = y + 1;
//         r = b + 1;

//         cout << (y + b + r) << endl;
       
//     }




//     cout << y << b << r << endl; 
    


// }

// int main() {
//     solve();
//     return 0;
// }
