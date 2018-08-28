#include<bits/stdc++.h>
using namespace std;
struct emm
{
    int x1;
    int x2;
    int y1;
    int y2;
}q[107];
int main()
{
    int n,sum1=0,sum2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&q[i].x1,&q[i].x2,&q[i].y1,&q[i].y2);
        if((q[i].x2==(q[i].x1+q[i].y1))&&(q[i].y2!=(q[i].y1+q[i].x1)))
        {
            sum2++;
        }
        else if((q[i].x2!=(q[i].x1+q[i].y1))&&(q[i].y2==(q[i].y1+q[i].x1)))
        {
            sum1++;
        }
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}
