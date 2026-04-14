#include <bits/stdc++.h>
using namespace std;
char a[110];
int o[110],p[110];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,s=0,q=0,w=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]=='B')
            {
                s++;
                q++;
                o[q]=i;
            }
            if(a[i]=='A')
            {
                w++;
                p[w]=i;
            }
        }
        if(s==m)cout<<"0"<<endl;
        else if(s<m)cout<<1<<'\n'<<p[m-s]<<' '<<"B"<<endl;
        else cout<<1<<'\n'<<o[s-m]<<' '<<"A"<<endl;
    }
    return 0;
}