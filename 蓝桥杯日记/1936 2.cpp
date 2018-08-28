#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int x;
    vector<int>emm;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        emm.push_back(x);
    }
    sort(emm.begin(),emm.end());
    int sum=0;
    int emmm=0;
    while(emm.size()!=1)
    {
        emmm=emm[0]+emm[1];
        sum+=emmm;
        emm.erase(emm.begin());
        emm.erase(emm.begin());
        emm.push_back(emmm);
        sort(emm.begin(),emm.end());
    }
    printf("%d\n",sum);
    return 0;
}
