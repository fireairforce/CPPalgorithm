#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&x,&y,&z);
        int sum=(x+y)/3;
        int emm1=x-sum;
        int emm2=y-sum;
        int emm3=emm1+emm2;
        int emm4=emm3/emm1;
        double emm=(1/emm4)*z;
        cout<<emm<<endl;
    }
    return 0;
}
