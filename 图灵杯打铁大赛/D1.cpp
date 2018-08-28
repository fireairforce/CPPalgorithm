#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
char a[maxn];
int emm[maxn]={0};
int main()
{
    ios::sync_with_stdio(false);
    int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     bool flag=0;

     for(int i=0;i<n;i++)
     {
         if(i<n-2)
         {
            if(a[i]=='6'&&a[i+1]=='6'&&a[i+2]=='6')
            {
               flag=1;
               emm[i]++;
            }
         }
     }
     int sum=0;
     if(!flag) cout<<0<<endl;
     else
     {
        for(int i=0;i<maxn;i++)
        {
           if(emm[i])
           {
               sum++;
           }
        }
        cout<<sum<<endl;
     }
    return 0;
}
