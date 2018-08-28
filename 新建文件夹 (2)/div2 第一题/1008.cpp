#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
int a[20];
int count=0;
int main()
{
int n,i,num=0;
if(n>=1&&n<=1000000)
{

while(cin>>n)
{	
for(i=2;i*i<=n;i++)
{
if(n%i==0)
 a[num++]=i;
while(n%i==0)
  n=n/i;
}
if(n>1&&n<1000000)
a[num++]=n;
for(i=0;i<num;i++)
{
	if(a[i]>0)
	{
		count++;
	}
}
if(count>=2)
{
	cout<<"YES"<<endl;
}
else 
{
	cout<<"NO"<<endl;
}
count=0;
memset(a,0,sizeof(a));
num=0;
}
}
return 0;
} 
/*#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int count=0;
int main()
{
int isprime(int a);
while(1)
{
int a,i=1;
int max, sqrts;
scanf("%d",&a);
sqrts = (int)sqrt(a);
if((a%sqrts)==0)
{
max = sqrt(a) + 1;
}
else
{
max = sqrt(a);
}
while(i<max)
{
if(a%i==0)
{
//printf("%4d ",i);
count++;
int t = a/i;
if(t!=i  && isprime(t) && t!=a)
count++;
//printf("%4d  ",a/i);
}
i++;
}
if(count>1)
{
	cout<<"YES"<<endl;
}
else 
{
	cout<<"NO"<<endl;
}
count=0;
}

}

int isprime(int a)
{
if(a<=0)
return -1;
int i=1;
int count = 0;
int max, sqrts;
//printf("请输入一个非负整数：");
//scanf("%d",&a);
sqrts = (int)sqrt(a);
if((a%sqrts)==0)
{
max = sqrt(a) + 1;
}
else
{
max = sqrt(a);
}
while(i<max)
{
if(a%i==0)
{
//printf("%4d  ",i);
count++;
//if(a/i!=i)
//printf("%4d  ",a/i);
}
i++;
}
//printf("%d\n",a);
count++;
if(count==2)
return 1;
else
return 0;
} */

