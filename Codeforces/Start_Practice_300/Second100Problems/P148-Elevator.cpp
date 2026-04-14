#include <bits/stdc++.h>
using namespace std;

void solve() {

    ifstream input("input.txt");   
    ofstream output("output.txt"); 

    string door;
    int rail;
    input >> door >> rail;


    if ((door == "front" && rail == 1) || (door == "back" && rail == 2)) {
        output << 'L' << endl;
    }
    else {
        output << 'R' << endl;
    }

  

    input.close();
    output.close();
  
   
}

int main() {
 
    solve();
   
    return 0;
}