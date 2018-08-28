#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
const int maxn=100;
int n,k;
char a[maxn][maxn];
int book[maxn];//用来标记列。
int ans;
int main()
{
    ios::sync_with_stdio(false);
    while(cin>>n>>k)
    {
        memset(a,'\0',sizeof(a));
        memset(book,0,sizeof(book));
        ans=0;
        if(n==-1&&k==-1)    break;
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cin>>a[i][j];
                }
            }

        }
    }
    return 0;
}
