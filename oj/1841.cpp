#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    scanf("%d",&n);
    string a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
       sum=0;
       int zoom=0;
       int len=a.size();
        for(int j=len-1;j>=0;j--)
        {
            int x=1;
            if('0'<=a[j]&&a[j]<='9')
            {
                for(int i=0;i<zoom;i++)
                {
                    x*=10;
                }
                sum+=(a[j]-'0')*x;
                zoom++;
            }
            else continue;
        }
        printf("%d\n",sum*513);
    }
    return 0;
}
