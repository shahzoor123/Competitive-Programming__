#include <iostream>
#include <vector>
using namespace std;
int main () {

    int t;
    cin>>t;

    while (t--) {

        vector <int> v;
        unsigned long long a;
        cin>>a;


        if(a%2==0) {cout<<"-1"<<endl;continue;}


        while (a!=3) {
            a/=2;
        if(a%2==1) {v.push_back(2);}
        if(a%2==0) {v.push_back(1);a++;}

        }


        v.push_back(2);

        
        cout<<v.size()<<endl;
        for (int i = v.size()-1;i>=0;i--) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        }
}