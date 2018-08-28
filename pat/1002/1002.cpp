#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
int a1[maxn],b1[maxn];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string a;
    cin>>a;
    string c[20]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int len =a.size();
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum+=a[len-i-1]-'0';
    }
    int hah=sum;
    int emm=0;
    while(sum!=0)
    {
        sum=sum/10;
        emm++;
    }
   // cout<<emm<<endl;
    int zoom=0;
    for(int i=1;i<=emm;i++)
    {
        a1[++zoom]=hah%10;
        hah=hah/10;
    }
    //cout<<zoom<<endl;
    for(int i=zoom;i>=1;i--)
    {
        cout<<c[a1[i]];
        if(i!=1)
        {
            cout<<" ";
        }
    }
    return 0;
}
