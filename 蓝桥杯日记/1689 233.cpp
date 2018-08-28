#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
int b[maxn];
stack<int>s;
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int emm=0;
    int zoom=0;
    for(int i=0;i<n;i++)
    {
        if(zoom<m)
        {
            s.push(i+1);
            //cout<<"push"<<endl;
            zoom++;
        }
        while(!s.empty()&&s.top()==b[emm])
        {
                 s.pop();
                 //cout<<"pop"<<endl;
                 zoom--;
                 emm++;
        }
    }
    if(emm!=n)
    {
        cout<<"震惊！昨天小汤河火车站竟然。。。"<<endl;
    }
    else if(emm==n)
    {
        stack<int>ss;
        int fuck=0,force=0;
         for(int i=0;i<n;i++)
      {
        if(force<m)
        {
            ss.push(i+1);
            cout<<"push"<<endl;
            force++;
        }
        while(!ss.empty()&&ss.top()==b[fuck])
        {
                 ss.pop();
                 cout<<"pop"<<endl;
                 force--;
                 fuck++;
        }
    }
    }
    return 0;
}
