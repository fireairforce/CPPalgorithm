//高精度减法。
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
void exch_str(char*s1,char*s2)
{
	char tmp[5000];
	strcpy(tmp,s1);
	strcpy(s1,s2);
	strcpy(s2,tmp);
}
int a1[5000],b1[5000],s[5000];
int main()
{
	char a[5000],b[5000];
	int sign=1;
	int len_a,len_b,i,j,k=0,t;
	scanf("%s %s",a,b);
	len_a=strlen(a);
	len_b=strlen(b);
	if(len_a<len_b)
	{
		sign=-1;
		exch_str(a,b);
		t=len_a;
		len_a=len_b;
		len_b=t;
	}
	else if(len_a==len_b)
	{
		for(i=0;i<len_a;i++)
		{
			if(a[i]>b[i])
			{
				sign=1;
				break;
			}
			else if(a[i]<b[i])
			{
				sign=-1;
				exch_str(a,b);
				break;
			}
			else 
			sign=1;
		}
		for(i=0;i<len_a;i++)
		{
			a1[i]=a[i]-'0';
		}
		for(j=0;j<len_b;j++)
		{
			b1[j]=b[j]-'0';
		}
		while(i>=0&&j>=0)
		{
			s[k]=a1[i]-b1[j];
			if(s[k]<0)
			{
				a1[i-1]-=1;
				s[k]+=10;
			}
			k++;
			i--;
			j--;
		}
		while(i>=0)
		{
			s[k]=a1[i];
			k++;
			i--;
		}
		if(sign<0)
		{
			printf("-");
		}
		while(s[k]==0&&k>0)
		{
			k--;
		}
		if(k==0)
		{
			printf("0");
		}
		while(k>0)
		{
			printf("%d",s[k]);
			k--;
		}	
	}
	return 0;
 } 
 
