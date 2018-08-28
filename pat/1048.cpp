#include<bits/stdc++.h>
using namespace std;
char a[107],b[107];
void reverse1(char s[])
{
    int j=strlen(s)-1;
    for(int i=0;i<j;i++,j--)
    {
        swap(s[i],s[j]);
    }
}
int main()
{
    scanf("%s %s",a,b);
    reverse1(a);reverse1(b);
    int len1=strlen(a),len2=strlen(b);
    if(len1<len2)
    {
        int i;
        for(i=len1;i<len2;i++)
        {
            a[i]='0';
        }
        a[i]=0;
    }
    else
    {
        int i;
        for(i=len2;i<len1;i++)
        {
            b[i]='0';
        }
        b[i]=0;
    }
    int len=max(len1,len2);
    char c[107]={0};
    char ch[]="0123456789JQK";
    for(int i=0;i<len;i++)
    {
        if((i+1)&1)
        {
            c[i]=ch[(b[i]-'0'+a[i]-'0')%13];
        }
        else
        {
            c[i]=ch[(b[i]-a[i]+10)%10];
        }
    }
    reverse1(c);
    cout<<c<<endl;
    return 0;
}
