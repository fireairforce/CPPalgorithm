#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[107];
    gets(a);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
       if('A'<=a[i]&&a[i]<='Z')
       {
           a[i]=a[i]-'A'+'a';
       }
    }
    for(int i=0;i<len;i++)
    {
        printf("%c",a[i]);
    }
    cout<<endl;
    return 0;
}
