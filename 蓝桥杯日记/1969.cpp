#include<bits/stdc++.h>
using namespace std;
bool flag;
const int maxn=1e7+5;
bool a[maxn];
int b[maxn];
int c[maxn];
int emm=0;
typedef long long ll;
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
    int n;
    scanf("%d",&n);
    ll sum=1;
    for(int i=0;i<n;i++)
    {
        sum=(b[i]%50000)*(sum%50000)%50000;
    }
    cout<<sum%50000<<endl;
    return 0;
}
