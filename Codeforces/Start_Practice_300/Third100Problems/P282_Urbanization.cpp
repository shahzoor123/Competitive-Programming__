#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int n,n1,n2;
    cin>>n>>n1>>n2;

    vector<long long int>v(n);
    for (long long int i = 0; i <n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    double sum1=0.0;
    long long int a=min(n1,n2);
    long long int b=max(n1,n2);

    for (long long int i = n-1; i >n-a-1; i--){
        sum1+=v[i];
    }

    double sum2=0.0;
    for (long long int i = n-1-a; i >n-a-1-b; i--){
        sum2+=v[i];
    }

    cout<<fixed<<setprecision(10);
    cout<<(sum1/a)+(sum2/b)<<endl;


    
}

int main(){

    solve();        
    return 0;
}
