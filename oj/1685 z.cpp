#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,n,a;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d",&n);
        multiset<int>qq;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            qq.insert(a);
        }
        int temp=0;
        int sum1=0;
        while(qq.size()!=1)
        {
           sum1+=*qq.begin();
           qq.erase(qq.begin());
           sum1+=*qq.begin();
           qq.erase(qq.begin());
           temp=sum1;
           qq.insert(temp);
        }
        qq.erase(temp);
        printf("%d\n",temp);
    }
    return 0;
}
