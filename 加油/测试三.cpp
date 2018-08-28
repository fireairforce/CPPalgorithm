#include <cstdio>
#include <iomanip>
int l,c;
int al[26];
char m[15];
void dfs(int n,int j)
{
    int i,sum;
    int num[26]={0};
    if(n==l)
    {
        for(i=0;i<l;i++)
        {
            num[m[i]-'a']++;
        }
        sum=num[0]+num[4]+num[8]+num[14]+num[20];
        if(sum>=1&&l-sum>=2)
        {
            for(i=0;i<l;i++)
            {
                printf("%c",m[i]);
            }
            printf("\n");
        }
        return;
    }
    for(i=j;i<26;i++)
    {
        if(al[i]>0)
        {
            m[n]='a'+i;
            al[i]--;
            dfs(n+1,i);
            al[i]++;
        }
    }
    return;
}
int main()
{
   int i;
    char a;
    scanf("%d%d\n",&l,&c);
    for(i=0;i<c;i++)
    {
        scanf("%c",&a);
        al[a-'a']++;
    }
    dfs(0,0);
    return 0;
}
