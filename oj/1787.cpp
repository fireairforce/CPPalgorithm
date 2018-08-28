#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x;
    int m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        int sum=0;
        for(int i=0;i<x;i++)
        {
            cin>>m;
            sum+=m;
        }
        cout<<sum<<endl;
    }
    return 0;
}
