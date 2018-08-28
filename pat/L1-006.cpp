#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
int a[maxn]={0},b[maxn]={0};
int main()
{
    int n;
    scanf("%d",&n);
    map<string,int>qaq;
    qaq["QAQ"]=1;
    map<string,int>::iterator it;
    for(it=qaq.begin();it!=qaq.end();it++)
    {
        cout<<it->first<<endl;
    }
    return 0;
}
