#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+7;
struct emm
{
    int n1;
    int b;
    int t;
    int n2;
}q[maxn];
int main()
{
    int t,k;
    scanf("%d %d",&t,&k);
    for(int i=0;i<k;i++)
    {
       scanf("%d %d %d %d",&q[i].n1,&q[i].b,&q[i].t,&q[i].n2);
    }
    int sum=t;
    for(int i=0;i<k;i++)
    {
        if(q[i].t>sum)
        {
            printf("Not enough tokens.  Total = %d.\n",sum);
            continue;
        }
        if(q[i].b==0)
        {
            if(q[i].n1<q[i].n2)
            {
                printf("Lose %d.  ",q[i].t);
                sum-=q[i].t;
                printf("Total = %d.\n",sum);
                if(sum==0)
                {
                    printf("Game Over.\n");
                    break;
                }
            }
            else
            {
                printf("Win %d!  ",q[i].t);
                sum+=q[i].t;
                printf("Total = %d.\n",sum);
            }
        }
        else
        {
            if(q[i].n1>q[i].n2)
            {
                printf("Lose %d.  ",q[i].t);
                sum-=q[i].t;
                printf("Total = %d.\n",sum);
                if(sum==0)
                {
                    printf("Game Over.\n");
                    break;
                }
            }
            else
            {
                printf("Win %d!  ",q[i].t);
                sum+=q[i].t;
                printf("Total = %d.\n",sum);
            }
        }
    }
    return 0;
}
