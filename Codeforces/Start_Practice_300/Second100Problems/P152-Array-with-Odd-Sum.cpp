#include <bits/stdc++.h>
using namespace std;


int totalSum(vector<int> a){
    int wholeSum = 0;
    for (int i=0;i<a.size();i++) {

        wholeSum += a[i];
      
    }

    return wholeSum;
}


// Second approach

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    bool hasOdd = false, hasEven = false;

    for (int &x : a) {
        cin >> x;
        if (x % 2 == 0) hasEven = true;
        else hasOdd = true;
    }

   
    int checkSum = totalSum(a);

    if (checkSum % 2 != 0) {
        cout << "YES" << endl;
        return;
    } 


    if (hasOdd && hasEven) {
        cout << "YES" << endl;
    }
    else{
         cout << "NO" << endl;
    }


// First approach

 //    for (int i=0;i<n;i++) {

 //        if (a[i] % 2 != 0){

 //            for (int j=0;j<n;j++) {
                    
 //                if (a[i] % 2 == 0){
 //                    a[j] = a[i];
 //                    checkSum = totalSum(a);

 //                     if (checkSum % 2 != 0) {
 //                        cout << "YES" << endl;
 //                        return;
 //                    } 

 //                }

 //            }

 //        }

 //    }


 // cout << "NO" << endl;
 
    

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
