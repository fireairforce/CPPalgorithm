#include<bits/stdc++.h>
const int maxn=1000;
int a[maxn][maxn];
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int t,emm;
    if(n%2==0)
    {
      for(int i=0;i<n/2;i++)
      {
        for(int j=0;j<m;j++)
        {
            t=a[i][j];
            a[i][j]=a[n-i-1][m-j-1];
            a[n-i-1][m-j-1]=t;
        }
       }
    }
    else
    {
        for(int i=0;i<n/2;i++)
        {
            for(int j=0;j<m;j++)
            {
                t=a[i][j];
               a[i][j]=a[n-i-1][m-j-1];
                a[n-i-1][m-j-1]=t;
            }
        }
        for(int k=0;k<m/2;k++)
        {
            t=a[n/2][k];
            a[n/2][k]=a[n/2][m-1-k];
            a[n/2][m-1-k]=t;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
            if(j!=m-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
}
