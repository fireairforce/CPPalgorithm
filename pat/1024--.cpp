#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+7;
int bb[maxn],bb2[maxn];
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
    char aa[maxn];
    gets(aa);
    int len1=strlen(aa);
    int book=0;
    char fir=aa[0];
    for(int i=0;i<len1;i++)
    {
        if(aa[i]=='E')
        {
            book=i;
            break;
        }
    }
    char sed=aa[book+1];
    int zoom=0;
    for(int i=book+2;i<len1;i++)
    {
        bb[zoom++]=aa[i]-'0';
    }
    int emm=0;
    for(int i=0;i<zoom;i++)
    {
        bb2[emm++]=bb[zoom-i-1];
    }
    int sum=0;
    for(int i=0;i<emm;i++)
    {
        sum+=bb2[i]*pow_mod(10,i);
    }
    if(fir=='+')
    {
        if(sed=='+')
        {
            for(int i=1;i<book;i++)
            {
                if(aa[i]=='.')
                {
                    continue;
                }
                else printf("%c",aa[i]);
            }
            for(int i=1;i<=sum;i++)
            {
                printf("0");
            }
            printf("\n");
        }
        else if(sed=='-')
        {
            printf("0.");
            for(int i=1;i<=sum;i++)
            {
                printf("0");
            }
            for(int i=1;i<book;i++)
            {
                printf("%c",aa[i]);
            }
            printf("\n");
        }
    }
    else if(fir=='-')
    {
        printf("-");
            if(sed=='+')
        {
            for(int i=1;i<book;i++)
            {
                if(aa[i]=='.')
                {
                    continue;
                }
                else printf("%c",aa[i]);
            }
            for(int i=1;i<=sum;i++)
            {
                printf("0");
            }
            printf("\n");
        }
        else if(sed=='-')
        {
            printf("0.");
            for(int i=1;i<=sum;i++)
            {
                printf("0");
            }
            for(int i=1;i<book;i++)
            {
                printf("%c",aa[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
