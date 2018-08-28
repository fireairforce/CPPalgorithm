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
        multiset<int>::iterator it1;
        it1=qq.begin();
        int sum1=0,sum2=0;
        while(qq.size()!=1)
        {
           sum1+=*it1;
           qq.erase(*it1);
           sum1+=*it1;
           qq.erase(*it1);
           temp=sum1;
           qq.insert(sum1);
        }
        printf("%d\n",temp);
    }
    return 0;
}
