#include <bits/stdc++.h>
using namespace std;

int main() {

    // 3 ---- Stacks & Queues
    queue<string> q;
    q.push("abc1");
    q.push("abc2");
    q.push("abc3");
    q.push("abc3");

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }


}
