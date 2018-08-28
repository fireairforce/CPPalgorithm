#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    scanf("%d",&n);
        int zoom=n/3;int force=n%3;
    if(force)
    {
    int mama=2*(zoom+1)-1;
    cout<<mama<<endl;
    }
    else
    {
        int baba=2*zoom;
        cout<<baba<<endl;
    }
    return 0;
}
