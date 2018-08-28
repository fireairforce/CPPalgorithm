#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1007];
    int b[1007];
    cin>>a;
    for(int i=0;i<=1000;i++)
    {
        b[i]=0;
    }
    for(int i=0;a[i];i++)
    {
        b[a[i]]++;
    }
    for(int i=0;i<=1000;i++)
    {
        if(b[i]!=0)
        {
            int zoom=i-'0';
            cout<<zoom<<":"<<b[i]<<endl;
        }
    }
    return 0;
}
