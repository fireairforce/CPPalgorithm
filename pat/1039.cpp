#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+7;
int main()
{
    char a[maxn],b[maxn];
    int sum=0,flag=0;
    map<char,int>emm1;
    for(int i='0';i<='9';i++)
    {
        emm1[i]=0;
    }
    for(int i='a';i<='z';i++)
    {
        emm1[i]=0;
    }
    for(int i='A';i<='Z';i++)
    {
        emm1[i]=0;
    }
    scanf("%s %s",&a,&b);
    int len1=strlen(a),len2=strlen(b);
    for(int i=0;a[i];i++)
    {
        emm1[a[i]]++;
    }
    for(int i=0;b[i];i++)
    {
        if(emm1[b[i]])
        {
            emm1[b[i]]--;
        }
        else
        {
            flag++;
        }
    }
    if(!flag)
    {
        printf("Yes %d\n",len1-len2);
    }
    else
    {
        printf("No %d\n",flag);
    }
    return 0;
}
