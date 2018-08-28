#include<bits/stdc++.h>
const int maxn=10001;
int a[maxn][maxn];
int b[maxn][maxn];
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    int zoom=n;
    int emm=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            b[i][j]=a[zoom][emm];
            zoom--;
        }
        emm++;
        zoom=n;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<b[i][j];
            if(j!=n)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
