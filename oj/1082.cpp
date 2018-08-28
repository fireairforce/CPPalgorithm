#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[107];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    scanf("%d",&m);
    for(int i=m-1;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
