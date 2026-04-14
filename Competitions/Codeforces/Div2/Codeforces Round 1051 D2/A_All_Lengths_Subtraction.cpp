#include<bits/stdc++.h>
using namespace std;
int a[1145]; 

int main(){
    int t,n;
    cin>>t;
    bool f,ff;
    while(t--){
        cin>>n;
        f=ff=0;
        for(int i=1;i<=n;++i) cin>>a[i];

        for(int i=1;i<=n;++i){
            if(a[i]>a[i-1]){   // check if sequence is rising at position i
                if(a[i]>a[i+1] || i==n){  // check if it's a peak (greater than next OR at last element)
                    if(!f) f=1;   // allow first peak
                    else{         // if already found one peak, this is the second → invalid
                        cout<<"NO\n";
                        ff=1; 
                        break;
                    }
                }
            }
        }
        if(!ff) cout<<"YES\n"; 
    } 
    return 0;
}
