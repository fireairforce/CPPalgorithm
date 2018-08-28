#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int main()
{
    char s[maxn]="";
    char s1[maxn]="";
    char s2[maxn]="PATest";
    int num[maxn];
    memset(num,0,sizeof(num));
    gets(s);
    int j=0;
    for(int i=0;s[i];i++)
    {
        if(s[i]=='P'||s[i]=='A'||s[i]=='T'||s[i]=='e'||s[i]=='s'||s[i]=='t')
        {
            s1[j++]=s[i];
        }
    }
    for(int i=0;i<7;i++)
    {
        for(j=0;s[j];j++)
        {
            if(s2[i]==s[j])
            {
                num[i]++;
            }
        }
    }
    for(j=0;s[j];j++)
    {
        for(int i=0;i<6;i++)
        {
            if(num[i]!=0)
            {
                cout<<s2[i];
                num[i]--;
            }
        }
    }
    return 0;
}
