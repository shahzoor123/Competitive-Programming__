#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin >> s;

    int n = s.size();


    int upper = 0;
    int lower = 0;

    for (int i=0;i<n;i++){
        if(isupper(s[i])){
            upper++;
        }
        else{
            lower++;
        }
    }


    if(upper > lower){
        transform(s.begin(),s.end(),s.begin (),::toupper);
        cout << s << endl;
    }
    else{
        transform(s.begin(),s.end(),s.begin (),::tolower);
        cout << s << endl;
    }

}



int main(){


    solve();        


  return 0;
}