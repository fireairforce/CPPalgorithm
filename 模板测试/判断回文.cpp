#include<bits/stdc++.h>
using namespace std;
bool huiwen(char s[])
{
    int index1=0,index2=strlen(s)-1;
    while(index1<index2)
    {
        if(s[index1]!=s[index2])
        {
            return false;
        }
        index1++;
        index2--;
        return true;
    }
}
int main()
{
    char a[10000];
    while(gets(a))
    {
     cout<<huiwen(a)<<endl;
    }
    return 0;
}
