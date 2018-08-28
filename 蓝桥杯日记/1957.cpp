#include<bits/stdc++.h>
using namespace std;
int a[107],b[107];
bool panduan(int n,int m)
{
    int cnt=0;
    while(n)
    {
        a[cnt++]=n%10;
        b[n%10]++;
        n/=10;
    }
    while(m)
    {
        if(b[m%10])  return false;
        a[cnt++]=m%10;
        b[m%10]++;
        m/=10;
    }
    return true;
}
int main()
{
    char s1[5],s2[5],s3[8];
    for(int i=1;i<=999;i++)
    {
        for(int j=1;j<=999;j++)
        {
            memset(a,0,sizeof(a));
            memset(b,0,sizeof(b));
            int sum=0;
            if(panduan(i,j))
            {
                sum=i*j;
                if(1000<=sum&&sum<=9999&&i<j)
                {
                    sprintf(s1,"%d",i);
                    sprintf(s2,"%d",j);
                    sprintf(s3,"%d",sum);
                    strcat(s1,s2);
                    sort(s1,s1+4);
                    sort(s3,s3+4);
                    if(strcmp(s1,s3)==0)
                    {
                        cout<<sum<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
