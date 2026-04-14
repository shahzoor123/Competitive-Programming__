#include <bits/stdc++.h>

using namespace std;

int main()
{
int x,y,z,c=0,maxi=0;
cin>>x;
while(x--)
{

    cin>>y>>z;
    c-=y;
    c+=z;
    maxi=max(maxi,c);

}
    cout<<maxi<<endl;
    return 0;
}