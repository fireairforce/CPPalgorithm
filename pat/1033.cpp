#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
int main()
{
    map<char,int>emm1;
    char a[maxn],b[maxn];
    char c[maxn];
    gets(a);
    gets(b);
    if(!strlen(a))
    {
        printf("%s",b);
        return 0;
    }
    for(int i=0;i<200;i++)
    {
        emm1[i]=0;
    }
    for(int i=0;a[i];i++)
    {
        emm1[a[i]]++;
    }
    int zoom=0;
    for(int i=0;b[i];i++)
    {
        if(emm1['+']&&!emm1[b[i]])
        {
           if('A'<=b[i]&&b[i]<='Z')
           {
               continue;
           }
           else if('a'<=b[i]&&b[i]<='z')
           {
               if(emm1[b[i]-'a'+'A'])
               {
                  continue;
               }
               else c[zoom++]=b[i];
           }
          else c[zoom++]=b[i];
        }
        else if(emm1[b[i]]&&!emm1['+'])
        {
            continue;
        }
        else if(emm1[b[i]]&&emm1['+'])
        {
            continue;
        }
        else if(!emm1[b[i]]&&!emm1['+'])
        {
            if('a'<=b[i]&&b[i]<='z')
            {
               if(emm1[b[i]-'a'+'A'])
               {
                  continue;
               }
               else c[zoom++]=b[i];
            }
            else if('A'<=b[i]&&b[i]<='Z')
            {
                if(emm1[b[i]-'A'+'a'])
                {
                    continue;
                }
                else c[zoom++]=b[i];
            }
        }
        else if(!emm1[b[i]]&&emm1['+'])
        {
            if('a'<=b[i]&&b[i]<='z')
            {
               if(emm1[b[i]-'a'+'A'])
               {
                  continue;
               }
               else c[zoom++]=b[i];
            }
            else if('A'<=b[i]&&b[i]<='Z')
            {
                if(emm1[b[i]-'A'+'a'])
                {
                    continue;
                }
                else c[zoom++]=b[i];
            }
        }
        else c[zoom++]=b[i];
    }
    if(!zoom)
    {
        printf("\n");
    }
    else
    {
        for(int i=0;i<zoom;i++)
        {
            printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}
