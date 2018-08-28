#include<iostream>
#include<cstdio>
#include<cstring> 
using namespace std;
int main()
{
	char a1[10000],b1[10000];//如果题目要求更大位的数字，记得把数组开大一点就行了。 
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
		a[lena-i]=a1[i]-48;//一个加数存入a数组 
	}
	for(int i=0;i<=lenb-1;i++)
	{
		b[lenb-i]=b1[i]-48;//一个加数存入b数组。 
	 } 
	 //用ascll值的转化对他们进行存储。 
	 
	 //他们的下标都是从1开始的，即第一个元素是存在数组的a[1]位置的。 
	 lenc=1;x=0;//所以这里的c数组的下表是从1开始的。 
	 while(lenc<=lena||lenc<=lenb)
	 {
	 	c[lenc]=a[lenc]+b[lenc]+x;//2个数 的每个位置相加。
		 x=c[lenc]/10;
		 //cout<<x<<" ; 
		 c[lenc]=c[lenc]%10;//这个式子用来存2个式子加了之后那个各位位置的值。 
		 //cout<<c[lenc]<<" ";
		 lenc++; 
	 }
	 c[lenc]=x;//2个很大的数相加之后，导致和最大的的那位没有进位，即x为0，那就把lenc减去一位。 
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
 

