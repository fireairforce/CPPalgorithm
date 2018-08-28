#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
const int maxn=100000; 
using namespace std;
int main() 
{
	char a1[maxn],b1[maxn];//分别储存2个很大的数。
	int a[maxn],b[maxn],c[maxn];
	int lena,lenb,lenc,i,x;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	gets(a1);
	gets(b1);//输入加数和被加数。 
	lena=strlen(a1),lenb=strlen(b1);
	for(int i=0;i<=lena-1;i++)
	{
		a[lena-i]=a1[i]-48;//一个放入a。 
	}
	for(int i=0;i<=lenb-1;i++)//一个放入b。 
	{
		b[lenb-i]=b1[i]-48;
	}
	lenc=1,x=0;
	while(lenc<=lena||lenc<=lenb)
	{
		c[lenc]=a[lenc]+b[lenc]+x;
		x=c[lenc]/10;
		c[lenc]%=10;
		lenc++;
	 } 
	 c[lenc]=x;
	 if(c[lenc]==0)//此时最高位上的加法，例如2个数相加大于10就要溢出。
	 {
	 	lenc--;
	  } 
	  for(i=lenc;i>=1;i--)
	  {
	  	cout<<c[i];
	  }
	return 0;
}
