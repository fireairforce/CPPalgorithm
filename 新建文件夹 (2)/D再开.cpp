#include<iostream>
#include<cstring>
#include<algorithm>
#include<iomanip>
const int maxn=30040;
using namespace std;
/*int maxa(int a[],int n)
{
int k,maxk=0,max=a[0];//maxk记录最大出现次数，max记录最大出现次数的值
for(int i=0;i<n;i++)//遍历数组a中的元素，对当前元素a[i]，让它与它之前的每个元素相比较，计算出现的次数k
{
k=0;
for(int j=0;j<i;j++)
{

if(a[j]==a[i])
{ k++;
   if(k>maxk){maxk=k;max=a[j];}
}
}
}
return max;
}
int wudong(int a[],int n)
{
int k,maxk=0,max=a[0];//maxk记录最大出现次数，max记录最大出现次数的值
for(int i=0;i<n;i++)//遍历数组a中的元素，对当前元素a[i]，让它与它之前的每个元素相比较，计算出现的次数k
{
k=0;
for(int j=0;j<i;j++)
{

if(a[j]==a[i])
{  k++;
   if(k>maxk)
   {
   maxk=k;max=a[j];
   }
}
}
}
return maxk;
}*/
int main()
{
	int a[maxn],b[maxn],c[maxn];
	int  n,k;
	int  m;
	int force;
	while(cin>>n>>k)
	{	
	    force=0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
		for(int j=b[i]-k;j<=b[i]+k;j++)
		{
            a[force]=j;
            force++;
		}
	   }
	   sort(a,a+force); 
	   int flag=a[0];
	   int time=0;
	   int maxNum=0;
	   int maxTime=0;
	   for(int i=0;i<force;i++)
	   {
	   	if(a[i]==flag)
	   	{
	   		time++;
		   }
		else if(a[i]!=flag)
		{
			if(time>maxTime)
			{
				maxTime=time;
				maxNum=a[i-1];
			}
			flag=a[i];
			time=1;
		}
		} 
		cout<<maxNum<<" "<<maxTime<<endl;
	   //cout<<maxa(a,force)<<" "<<wudong(a,force)+1<<endl;
    }
	return 0;
}
