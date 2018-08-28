#include<bits/stdc++.h>
int a[107]={0},b[107]={0};
using namespace std;
int f(int x)
{
    if(x==1||x==2)
    {
        return 1;
    }
    else if(x%2==0)
    {
        return f(x-1)+2*f(x-2);
    }
    else if(x%2!=0)
    {
        return 2*f(x-1)+f(x-2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=f(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
