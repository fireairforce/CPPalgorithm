#include <cstdio>
#include<iostream>
#include <cstring>
using namespace std;
int num[1000050];
int main()
{
    int n;
    while(cin>>n)
    {
        int a,i;
        int ans=1;
        memset(num,0,sizeof(num));
        while(n--)
        {
			scanf("%d",&a);
            if(a>0||a<=100000)
            {
                num[a]=1;
            }
            
        }
        for(i=1;i<=1000000;i++)
        {
            if(num[i]==0)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
