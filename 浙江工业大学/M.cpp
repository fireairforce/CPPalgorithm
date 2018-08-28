#include<bits/stdc++.h>
using namespace std;
const int maxn=10050;
int a[maxn];
int b[5];
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
            int x;
            cin>>x;
            for(int j=1;j<=x;j++)
            {
                cin>>a[j];
            }
            int y;
            cin>>y;
            sort(a+1,a+x+1);
            b[1]=b[2]=b[3]=0;
            for(int k=1;k<=x;k++)
            {
                sort(b+1,b+4);
                b[1]=max(b[1],a[k])+y;
            }
            cout<<b[1]<<endl;
    }
    return 0;
}
