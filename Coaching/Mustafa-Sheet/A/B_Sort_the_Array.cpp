#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;

    vector<int> a(n) , b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];  
    }

    sort(a.begin(), a.end());

    int l = -1, r = -1;

    for (int i=0; i < n; i++){
        if(a[i] != b[i]){
            if(l == -1) l = i;
            r = i;
        }
    }

    if (l == -1) {
        cout << "yes\n1 1\n";
        return;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if (a == b) {
        cout << "yes\n" << l + 1 << " " << r + 1 << endl;
    } else {
        cout << "no\n";
    }
    

}

int main(){
    solve();        
    return 0;
}


















// bruteforce method



// #include <bits/stdc++.h>
// using namespace std;

// bool reverse(vector<int> a) {
//     return is_sorted(a.begin(), a.end()); 
// }

// void solve(){
//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];  
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             vector<int> temp = a;
//             reverse(temp.begin() + i, temp.begin() + j + 1);

//             if (reverse(temp)) {
//                 cout << "yes" << endl;
//                 cout << i + 1 << " " << j + 1 << endl;
//                 return;
//             }
//         }
//     }

//     cout << "no" << endl;
// }

// int main(){
//     int t = 1;
//     solve();        
//     return 0;
// }
