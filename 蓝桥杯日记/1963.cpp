#include<bits/stdc++.h>
using namespace std;
int sum=0;
int book[15]={4};
void dfs(int x,int emm)
{
   if(x>13)
   {
       return ;
   }
   if(emm>=13)
   {
       if(emm==13)
       {
           sum++;
           return ;
       }
   }
    else
       {
           dfs(x+1,emm);
           dfs(x+1,emm+1);
           dfs(x+1,emm+2);
           dfs(x+1,emm+3);
           dfs(x+1,emm+4);
       }
   return;
}
int main()
{
    dfs(0,0);
    printf("%d\n",sum);
    return 0;
}
