#include<bits/stdc++.h>
using namespace std;
bool flag;
const int maxn=1e7+5;
bool a[maxn];
int b[maxn/2];
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
    shaixuanprime();//����ǰɸѡһ����
    int t;
    int k=0;
    int m;//mΪ�������ݡ�
   cin>>t;
   while(t--)
   {
       cin>>m;
        int sum=0;
       for(int i=0;i<emm;i++)//����ֱ�ӱ����㷶Χ�����еĵ�������
       {
            if(b[i]>=m/2+1)//����ɸ��m/2+1���Ѿ��㹻�ˣ������������4����
                break;
            if(a[m-b[i]]==0&&m>=2*b[i])//�ܺͼ�ȥĳ�������õ����Ǹ������������������mҪ�����С������2���󣨱Ͼ�Ҫ��֤�Ǵ�ǰ��������ɸ��
            {
                sum++;
            }
       }
       cout<<"Case "<<++k<<": "<<sum<<endl;
   }
    return 0;
}
