#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1007];
    int b[1007];
    gets(s);
    int len1=strlen(s);
    for(int i=0;i<=1000;i++)
    {
        b[i]=0;
    }
    for(int i=0;s[i];i++)
    {
       if(('A'<=s[i]&&s[i]<='Z')||('a'<=s[i]&&s[i]<='z'))
       {
           if('A'<=s[i]&&s[i]<='Z')
           {
            s[i]=s[i]+32;
           }
           b[s[i]]++;
       }
    }
    int minx=-1;
    int start=0;
    for(int i=0;i<1000;i++)
    {
            if(b[i]>minx)
            {
                minx=b[i];
                start=i;
            }
    }
    cout<<(char)start<<" "<<minx<<endl;
    return 0;
}
