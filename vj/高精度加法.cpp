#include<iostream>
#include<cstdio>
#include<cstring> 
using namespace std;
int main()
{
	char a1[10000],b1[10000];//�����ĿҪ�����λ�����֣��ǵð����鿪��һ������ˡ� 
	int a[10000],b[10000],c[10000];
	int lena,lenb,lenc,i,x;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	gets(a1);
	gets(b1);
	lena=strlen(a1);
	lenb=strlen(b1);
	for(int i=0;i<=lena-1;i++)
	{
		a[lena-i]=a1[i]-48;//һ����������a���� 
	}
	for(int i=0;i<=lenb-1;i++)
	{
		b[lenb-i]=b1[i]-48;//һ����������b���顣 
	 } 
	 //��ascllֵ��ת�������ǽ��д洢�� 
	 
	 //���ǵ��±궼�Ǵ�1��ʼ�ģ�����һ��Ԫ���Ǵ��������a[1]λ�õġ� 
	 lenc=1;x=0;//���������c������±��Ǵ�1��ʼ�ġ� 
	 while(lenc<=lena||lenc<=lenb)
	 {
	 	c[lenc]=a[lenc]+b[lenc]+x;//2���� ��ÿ��λ����ӡ�
		 x=c[lenc]/10;
		 //cout<<x<<" ; 
		 c[lenc]=c[lenc]%10;//���ʽ��������2��ʽ�Ӽ���֮���Ǹ���λλ�õ�ֵ�� 
		 //cout<<c[lenc]<<" ";
		 lenc++; 
	 }
	 c[lenc]=x;//2���ܴ�������֮�󣬵��º����ĵ���λû�н�λ����xΪ0���ǾͰ�lenc��ȥһλ�� 
	 if(c[lenc]==0)
	 {
	 	lenc--;
	 }
	 for(int i=lenc;i>=1;i--)
	 {
	 	cout<<c[i];
	 }
	 cout<<endl;
	return 0;
 }
 

