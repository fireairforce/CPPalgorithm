#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
int b[maxn];
stack<int>s;
int n;
int main()
{
    while(cin>>n)
    {
        if(n==0) break;
        while(cin>>b[0])
        {
            if(b[0]==0) break;
            for(int i=1;i<n;i++)
            {
                cin>>b[i];
            }
            int emm=0;
            for(int i=0;i<n;i++)
            {
                s.push(i+1);
                while(!s.empty()&&s.top()==b[emm])
                {
                    s.pop();
                    emm++;
                }
            }
            if(emm==n)
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
          memset(b,0,sizeof(0));
        cout<<endl;
    }
    return 0;
}
