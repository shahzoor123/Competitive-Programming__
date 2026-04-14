#include <bits/stdc++.h>
using namespace std;

void solve() {
    int andrew, dimitry, michal;
    cin >> andrew >> dimitry >> michal;

    // cout << "Peoples: " << andrew << " " << dimitry << " " << michal << endl;

    int g, p, b;
    cin >> g >> p >> b;

    // cout << "Grapes: " << g << " " << p << " " << b << endl;

    while (andrew > 0){
        if(g > 0){
            g--;
            andrew--;
        }
        else{
            cout << "NO" << endl;
            return;
        }

    }

    while (dimitry > 0){

        if(g > 0){
            g--;
            dimitry--;
        }

        else if(p > 0){
            p--;
            dimitry--;
        }
        else{
            cout << "NO" << endl;
            return;
        }

   
    }


    while (michal > 0){


        if(g > 0){
            g--;
            michal--;
        }

        else if(p > 0){
            p--;
            michal--;
        }
        else if(b > 0){
            b--;
            michal--;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }

   cout << "YES" << endl;

}

int main() {
   

    solve();
    

    return 0;
}
