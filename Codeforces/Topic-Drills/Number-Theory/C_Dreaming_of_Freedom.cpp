#include<stdio.h>
int t,n,m;
int main(){
scanf("%d",&t);
while(t--){
scanf("%d%d",&n,&m);
if(n==1){puts("YES");continue;}
int i;
for(i=2;i*i<=n;i++) if(!(n%i)) break;
if(n%i!=0) i=n;
puts(i<=m? "NO":"YES");
}
return 0;
}