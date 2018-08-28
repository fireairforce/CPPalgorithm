#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
     string c;
    cin>>c;
    set<string>a;
    string b;
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        a.insert(b);
    }
    if(a.count(c))
    {
        a.erase(c);
        set<string>::iterator it;
        for(it=a.begin();it!=a.end();it++)
        {
            cout<<*it;
            if(it!=a.end())
            {
                cout<<" ";
            }
        }
    }
    else cout<<"song"<<endl;
    return 0;
}
