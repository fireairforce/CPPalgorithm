#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
char s[maxn];
int a[maxn]={0};
void hhh(char str[],int len[],int n)
{
    len[0]=1;
    for(int i=1,j=0;i<(n<<1)-1;++i)
    {
        int p=i>>1,q=i-p,r=((j+1)>>1)+len[j]-1;
        len[i]=r<q?0:min(r-q+1,len[(j<<1)-i]);
        while(p>len[i]-1&&q+len[i]<n&&str[p-len[i]]==str[q+len[i]])
        {
            ++len[i];
        }
        if(q+len[i]-1>r)
        {
            j=i;
        }
    }
}
int main()
{
    gets(s);
    int len1=strlen(s);
    int qaq=(len1<<1)-1;
    hhh(s,a,len1);
    cout<<*max_element(a,a+qaq+1)+2<<endl;
    return 0;
}
