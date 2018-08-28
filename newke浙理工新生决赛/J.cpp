#include<bits/stdc++.h>
using namespace std;
struct shuzu
{
    int x;
    int y;
}q[10];
const int maxn=1000+50;
int a[maxn];
int main()
{
    q[0].x=2,q[0].y=4;
    q[1].x=0,q[1].y=2;
    q[2].x=3,q[2].y=2;
    q[3].x=3,q[3].y=2;
    q[4].x=1,q[4].y=3;
    q[5].x=3,q[5].y=2;
    q[6].x=3,q[6].y=3;
    q[7].x=1,q[7].y=2;
    q[8].x=3,q[8].y=4;
    q[9].x=3,q[9].y=3;
    int n;
    cin>>n;
     int sumx=0;
     int sumy=0;
     string a1;
    while(n--)
    {
        memset(a,0,sizeof(a));
        getchar();
        cin>>a1;
        int len=a1.size();
        //cout<<len<<endl;
        for(int i=0;i<len;i++)
        {
            a[i]=a1[i]-48;
        }
        for(int j=0;j<len;j++)
        {
            sumx+=q[a[j]].x;
            sumy+=q[a[j]].y;
        }
        cout<<sumx<<" "<<sumy<<endl;
        sumx=0;sumy=0;
    }
    return 0;
}
