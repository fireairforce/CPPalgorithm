#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    set<string>a;
    string b;
    map<string,int>emm;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        emm[b]++;
        a.insert(b);
    }
    set<string>::iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<" "<<emm[*it]<<endl;
    }
    return 0;
}
