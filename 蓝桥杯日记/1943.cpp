#include<bits/stdc++.h>
using namespace std;
bool flag;
const int maxn=1e6+5;
bool a[maxn];
int b[maxn];
int emm=0;
void shaixuanprime()//����ɸ����
{
    memset(a,0,sizeof(a));
    a[0]=a[1]=1;
    for(int i=2;i<=maxn;++i)
    {
        if(a[i]==0)
        {
            b[emm++]=i;//�ȷ�2,Ȼ����ı���ȫGG��������b����һ�����������
            for(int j=2*i;j<=maxn;j+=i)//2�ı���ȫGG
            {
                a[j]=1;
            }
        }
    }
}
int main()
{
    shaixuanprime();
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        for(int j=0;j<1000;j++)
        {
            if(b[j]<x&&x<b[j+1])
            {
                if(abs(b[j]-x)<abs(b[j+1]-x))
                {
                    cout<<b[j]<<endl;
                }
                else if(abs(b[j]-x)>=abs(b[j+1]-x))
                {
                  cout<<b[j+1]<<endl;
                }
            }
            else if(b[j]==x)
            {
                cout<<x<<endl;
            }
        }
    }
    return 0;
}
