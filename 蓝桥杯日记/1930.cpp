#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    queue<int>zoomdong;
    scanf("%d",&n);
    int x,y;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x==1)
        {
           scanf("%d",&y);
           zoomdong.push(y);
        }
        else if(x==2)
        {
            if(!zoomdong.empty())
            {
                printf("%d\n",zoomdong.front());
               zoomdong.pop();
            }
            else printf("no\n");
        }
        else if(x==3)
        {
            printf("%d\n",zoomdong.size());
        }
    }
    return 0;
}
