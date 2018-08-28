#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
char a[maxn];
int main()
{
    gets(a);
    int p=0,a1=0;
    unsigned long long sum=0;
    for(int i=0;a[i];i++)
    {
        if(a[i]=='P')
        {
            p++;
        }
        if(a[i]=='A')
        {
            a1+=p;
        }
        if(a[i]=='T')
        {
            sum+=a1;
        }
    }
    sum%=1000000007;
    cout<<sum<<endl;
    getchar();
    return 0;
}
