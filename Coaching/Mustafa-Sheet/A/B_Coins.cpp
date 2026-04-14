#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n = 3;

    int a = 0,b = 0,c = 0;

    for (int i=0;i<n;i++){
        string s;
        cin >> s;

        if(s[0] == 'A' && s[1] == '>' && s[2] == 'B' || s[0] == 'B' && s[1] == '<' && s[2] == 'A'){
            a++;
        }
        else if (s[0] == 'A' && s[1] == '<' && s[2] == 'B' || s[0] == 'B' && s[1] == '>' && s[2] == 'A'){
            b++;
        }
        else if (s[0] == 'C' && s[1] == '<' && s[2] == 'B' || s[0] == 'B' && s[1] == '>' && s[2] == 'C'){
            b++;
        }
        else if (s[0] == 'B' && s[1] == '<' && s[2] == 'C' || s[0] == 'B' && s[1] == '<' && s[2] == 'C'){
            c++;
        }
        else if (s[0] == 'C' && s[1] == '>' && s[2] == 'A' || s[0] == 'A' && s[1] == '<' && s[2] == 'C'){
            c++;
        } 
        else if (s[0] == 'C' && s[1] == '<' && s[2] == 'A' || s[0] == 'A' && s[1] == '>' && s[2] == 'C'){
            a++;
        }
        else if (s[0] == 'C' && s[1] == '>' && s[2] == 'B' || s[0] == 'A' && s[1] == '>' && s[2] == 'C'){
            c++;
        }
    }

    if(a == b || a == c || c == b){
        cout << "Impossible" << endl;
        return;
    }

    vector<pair<char, int>> freq = {
        {'A', a},
        {'B', b},
        {'C', c}
    };

    sort(freq.begin(), freq.end(), [](const pair<char, int> &p1, const pair<char, int> &p2) {
        return p1.second < p2.second;
    });

    for (auto x : freq){
        cout << x.first;
    }
    

}



int main(){


  solve();        
  return 0;
}