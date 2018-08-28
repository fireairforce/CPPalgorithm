#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    unsigned long long n;
     freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    while(cin>>n)
    {
        ios::sync_with_stdio(false);
        int zoom=0;
        int force=0;
        for(int i=0;i<=sqrt(n);i++)
        {
            for(int j=0;j<=sqrt(n);j++)
            {
                if(j==i)
                {
                    continue;
                }
                else
                {
                    if((j*j*j-i*i*i)==n)
                    {
                        zoom=i;
                        force=j;
                        break;
                    }
                }
            }
            if(zoom!=0||force!=0)
            {
                break;
            }
        }
        if(zoom==0&&force==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<zoom<<" "<<force<<endl;
        }
        cin.tie(0);
    }
    return 0;
}
