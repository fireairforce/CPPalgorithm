#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+7;
struct node
{
    string qaq;
    int zoom;
}q[maxn];
int main()
{
    int m,n,s;
    scanf("%d %d %d",&m,&n,&s);
    map<string,int>emm1;
    for(int i=1;i<=m;i++)
    {
       cin>>q[i].qaq;
       q[i].zoom=0;
       emm1[q[i].qaq]=0;
    }
    if(s>m)
    {
        printf("Keep going...\n");
    }
    else
    {
       for(int i=s;i<=m;i+=n)
       {
           while(emm1[q[i].qaq])
           {
               i++;
           }
           q[i].zoom=1;
           emm1[q[i].qaq]=1;
       }
       for(int i=s;i<=m;i++)
       {
           if(q[i].zoom)
           {
               cout<<q[i].qaq<<endl;
           }
       }
    }
    return 0;
}
