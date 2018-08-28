#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    int x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    set<int>::iterator it;
    cout<<s.size()<<endl;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it;
        if(it!=s.end())
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}

