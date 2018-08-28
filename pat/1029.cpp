#include<bits/stdc++.h>
using namespace std;
const int maxn=1007;
int main()
{
    int zoom[maxn],force[maxn],zoom1[maxn];
    memset(zoom,0,sizeof(zoom));
    memset(force,0,sizeof(force));
    string a,b;
    char c[maxn];
    cin>>a>>b;
    for(int i=0;a[i];i++)
    {
        zoom[a[i]]++;
    }
    for(int i=0;b[i];i++)
    {
        force[b[i]]++;
    }
    int hah=0;
    for(int i=0;a[i];i++)
    {
        if(zoom[a[i]]!=force[a[i]])
        {
            if('a'<=a[i]&&a[i]<='z')
            {
                a[i]=a[i]-'a'+'A';
            }
            c[++hah]=a[i];
        }
    }
    string str="";
    for(int i=1;i<=hah;i++)
    {
        if(c[i]!=' ')
        {
            str+=c[i];
            for(int j=i+1;j<=hah;j++)
            {
                if(c[j]==c[i])
                {
                    c[j]=' ';
                }
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
