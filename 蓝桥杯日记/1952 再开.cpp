#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    set<int>emm;
    int m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        emm.insert(m);
    }
    set<int>::iterator it1;
    for(it1=emm.begin();it1!=emm.end();it1++)
    {
        cout<<*it1<<endl;
    }
    return 0;
}
