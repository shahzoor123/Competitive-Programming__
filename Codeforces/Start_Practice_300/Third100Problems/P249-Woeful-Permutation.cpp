#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=n-1;i>=1;i-=2){
        arr[i-1]=i+1;
        arr[i]=i;
    }
    if(n%2==1)
        arr[0]=1;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
