/*#include<iostream>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<cmath>
const int maxn=1e6+3;
using namespace std;
int main()
{
    int t;
    cin>>t;
    int k=0;
    while(t--)
    {
      int m;
       int x;
         int ans;
        int zoom=0;
        cin>>m>>x;
        ans=x%m;
        while(ans!=0)
        {
            ans=(ans*10+x)%m;
            zoom++;
        }
        cout<<"Case "<<++k<<": "<<zoom+1<<endl;
    }
    return 0;
}*/
/*#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int n,digit,ans,cnt;
    int k=1,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&digit);
        ans=digit%n;//赋值前要先取余，要不然会WA
        cnt=1;
        while(ans!=0)
        {
            ans=(ans*10+digit)%n;
            cnt++;
            cout<<ans<<endl;
        }
        printf("Case %d: %d\n",k++,cnt);
    }
    return 0;
}*/


