#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+7;
int b[maxn];
int pow_mod(int a,int b)
{
    int ans=1,base=a;
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
    printf("%d",pow_mod(10,1));
    string a;
    scanf("%s",&a);
    int len1=a.size();
    int book=0;
    char fir=a[0];
    for(int i=0;i<len1;i++)
    {
        if(a[i]=='E')
        {
            book=i;
        }
    }
    char sed=a[book+1];
    int zoom=0;
    for(int i=book+2;i<len1;i++)
    {
        b[zoom++]=a[len1-i-1]-'0';
    }
    int sum=0;
    for(int i=0;i<(len1-book-2);i++)
    {
        sum+=b[i]*pow_mod(10,i);
    }
    printf("%d\n",sum);
    /*if(fir=='+')
    {
        if(sed=='+')
        {
            for(int i=1;i<book;i++)
            {
                if(a[i]=='.')
                {
                    continue;
                }
                else printf("%s",a[i]);
            }
            //for(int i=1;i<=)
        }
        else if(sed=='-')
        {

        }
    }
    else if(fir=='-')
    {

    }*/
    return 0;
}
