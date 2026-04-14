#include <bits/stdc++.h>
using namespace std;

void solve(const vector<string>& lines) {

    int maxLength = 0;
    for (auto& line : lines) {
        maxLength = max(maxLength, (int)line.size());
    }

    string border(maxLength + 2, '*');

    bool left = false;



    cout << border << endl;
    for (int i=0;i<lines.size();i++){
        cout << "*";
        int d = maxLength - lines[i].size();
        if(d % 2 == 0){
            for (int i=0;i<d/2;i++){
                cout << " ";
            }
            cout << lines[i];

            for (int i=0;i<d/2;i++){
                cout << " ";
            }
            
        }
        else{
        

            int l,r;
            l = d/2,r=d/2;

            if(left) {
                l += 1;
            }
            else{
                r += 1;
            }

            left = !left;

            for (int i=0;i<l;i++){
                cout << " ";
            }

            cout << lines[i];

            for (int i=0;i<r;i++){
                cout << " ";
            }

        }
        cout << "*" << endl;
    }
    cout << border << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> lines;
    string s;
    while (getline(cin, s)) {
        lines.push_back(s);
    }
    solve(lines);

    return 0;
}
