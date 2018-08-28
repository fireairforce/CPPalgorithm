#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
bool a[maxn];
int b[maxn];
int emm=1;
void shaixuanprime()
{
    memset(a,0,sizeof(a));
    a[0]=a[1]=1;
    for(int i=2;i<=maxn;i++)
    {
        if(a[i]==0)
        {
            b[emm++]=i;
            for(int j=2*i;j<=maxn;j+=i)
            {
                a[j]=1;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
   shaixuanprime();
   int m,n;
   cin>>m>>n;
   for(int i=m;i<=n;i++)
   {
     cout<<b[i];
     if((i-m+1)%10==0||i==n)
     {
         cout<<endl;
     }
     else
     {
         cout<<" ";
     }
   }
    return 0;
}
