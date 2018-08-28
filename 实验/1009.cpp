#include<bits/stdc++.h>
using namespace std;
int main()
{
    string zoom;
    int a=0,b=0,c=0,d=0;
    getline(cin,zoom);
    int len=zoom.size();
    for(int i=0;i<len;i++)
    {
        if('a'<=zoom[i]&&zoom[i]<='z'||'A'<=zoom[i]&&zoom[i]<='Z')
        {
            a++;
        }
        else if(zoom[i]==' ')
        {
            b++;
        }
        else if('0'<=zoom[i]&&zoom[i]<='9')
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
    return 0;
}
