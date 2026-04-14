#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};



string isBalanced(string s) {

    stack<char> st;

    for(char bracket : s){
        if(symbols[bracket] < 0){
            st.push(bracket);
        }
        else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0){
                return "NO";
            }
        }
    }

    if(st.empty()) return "YES";
    return "NO";

}



vector<int> NGE(vector<int> v){

   vector<int> nge(v.size());
   stack<int> st;

   for(int i=0;i<v.size();i++){
        while(!st.empty() && v[i] > v[st.top()]){
            nge[st.top()] = i;
            st.pop();
        }

        st.push(i);
   }

   while(!st.empty()){
        nge[st.top()] = -1;
        st.pop();
   }

   return nge;


}


int main() {

    // 3 ---- Stacks & Queues
    // stack<int> s;
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);
    // while(!s.empty()){
    //     cout << s.top() << endl;
    //     s.pop();
    // }

    // Balanced Brackets Matching using Stack

    // int t;
    // cin >> t;

    // while(t--){
    //     string s;
    //     cin >> s;
    //     cout << isBalanced(s) << endl;
    // }


    // Next Greater Element using Stacks


    int n;
    cin >> n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);

    }

    vector<int> nge = NGE(v);

    for(int i=0;i<n;i++){
        cout << v[i] << " " << (nge[i] == -1 ? - 1 : v[nge[i]]) << endl;

    }

}
