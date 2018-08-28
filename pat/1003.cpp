#include<bits/stdc++.h>
const int maxn=1e6;
using namespace std;
int main()
{
   // ios::sync_with_stdio(false);
    int n;
    char a1[maxn];
    cin>>n;
    int p,a,t;
    int p1,t1;
    int e;
     getchar();
    for(int i=1;i<=n;i++)
    {
        gets(a1);
        bool flag = 0;
        int len1=strlen(a1);
        p=0;a=0;t=0;
        p1=0;t1=0;
        e=0;
        for(int j=0;j<len1;j++)
        {
            if(a1[j]=='P')
            {
                p++;
                p1=j;
            }
            else if(a1[j]=='A')
            {
                a++;
            }
            else if(a1[j]=='T')
            {
                t++;
                t1=j;
            }
            else e++;
        }
        if(e>0||a==0||p>1||t>1||p1*(t1-p1-1)!=len1-t1-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
          cout<<"YES"<<endl;
        }
    }
    return 0;
}
