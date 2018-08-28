#include<bits/stdc++.h>
using namespace std;
long long mod(long long a,long long b)
{
    long long ans=1,base=a;
    while(b!=0)
    {
        if(b&1!=0)
        {
            ans*=base;
        }
        base*=base;
        b>>=1;
    }
    return ans;
}
int main()
{
    string a1,b1;
    int a,b;
    cin>>a1>>a>>b1>>b;
    int len1=a1.size(),len2=b1.size();
    int flag1=0,flag2=0;
    for(int i=0;a1[i];i++)
    {
        if(a1[i]-'0'==a)
        {
            flag1++;
        }
    }
    for(int i=0;b1[i];i++)
    {
        if(b1[i]-'0'==b)
        {
            flag2++;
        }
    }
    int pa=0,pb=0;
    for(int i=0;i<flag1;i++)
    {
        pa+=a*mod(10,i);
    }
    for(int i=0;i<flag2;i++)
    {
        pb+=b*mod(10,i);
    }
    printf("%d\n",pa+pb);
    return 0;
}

