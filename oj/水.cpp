#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a1[100],b1[100];
    int a[100],b[100],c[100];
    int a1_len,b1_len,lenc,i,x;
    while(scanf("%s %s,&a1,&a2"))
    {
        a1_len=strlen(a1);
    b1_len=strlen(b1);

    for (i=0;i<=a1_len-1;i++)
    {
        a[a1_len-i]=a1[i]-48; //������������a���� ��
    }

    for (i=0;i<=b1_len-1;i++)
    {
        b[b1_len-i]=b1[i]-48; //������������b����
    }

    lenc =1;
    x=0;

   while(lenc <=a1_len || lenc <=b1_len)
   {
        c[lenc]=a[lenc]+b[lenc]+x; //������� ��
        x=c[lenc]/10;   //Ҫ����λ
        c[lenc]=c[lenc]%10;     //��λ�����
        lenc++;     //�����±��1
    }

    c[lenc]=x;
    if (c[lenc]==0)
    {
        lenc--; //������߽�λ
    }

    for (i=lenc;i>=1;i--)
    {
        cout<<c[i]; //������
    }
    }
    return 0;
}
