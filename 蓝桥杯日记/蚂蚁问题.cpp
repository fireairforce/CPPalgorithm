#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[57]={0},book[57]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       if(a[i]<0)
       {
           a[i]=-a[i];
           book[i]=1;
       }
    }
    int ans=0;
    if(a[0]<0)
    {
        for(int i=1;i<n;i++)
        {
            if(!book[i]&&a[i]<a[0])
            {
                ans++;
            }
        }
        if(ans)
        {
            for(int i=1;i<n;i++)
            {
                if(book[i]&&a[i]>a[0])
                {
                    ans++;
                }
            }
        }
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(book[i]&&a[i]>a[0])
            {
                ans++;
            }
        }
        if(ans)
        {
            for(int i=1;i<n;i++)
            {
                if(!book[i]&&a[i]<a[0])
                {
                    ans++;
                }
            }
        }
    }
    printf("%d\n",ans+1);
    return 0;
}
