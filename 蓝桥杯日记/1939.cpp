#include<iostream>
#include<cstring>                               //����memset(��������0/-1��ֻ���ǽ�����������Ԫ�س�ʼ��������������sizeof(������))
#include<algorithm>                             //�㷨ͷ�ļ������а��������õĿ⺯��
using namespace std;
int a[120]={-1},book[20]={0},sum=0;          //book�������������1-13�ĸ����Ѿ����ù��ˣ��ù����Ϊ1�������Ϊ0��
void dfs(int x)
{

      if(x>3&&a[1]+a[2]!=a[3])           //���ǰ�������Ѿ���ȡ�����������������������򷵻�����
            return;
        if(x>6&&a[4]-a[5]!=a[6])           //��ǰ�����������һ������4-6�����Ƿ�����ڶ�������
            return;
        if(x>9&&a[7]*a[8]!=a[9])             //ͬ��
            return;
        if(x>12&&a[12]*a[11]==a[10])        //����������������㣬����sum++
        {
            sum++;
            return;
        }

    for(int i=1;i<14;i++)                     //��1-13����ÿһ��������
    {
        if(book[i]==0)                     //��������û���ù�������ã�������һ��
        {
            a[x]=i;
            book[i]=1;
            dfs(x+1);
            book[i]=0;
        }
    }
    return;
}
int main()
{
    memset(a,-1,sizeof(a));
    dfs(1);
    cout<<sum;
    return 0;
}
