//这题用的2个字符串公共字符串问题模板解开。
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *lcs(const char *str1,const char *str2)
{
	int m=strlen(str1)+1;
	int n=strlen(str2)+1;
	int capacity=m*n*sizeof(int);
	int *record=(int*)malloc(capacity);
	int i,j;
	memset(record,0,capacity);
	for(i=1;i<n;i++)
	{
		for(j=1;j<m;j++)
		{
			if(str1[j-i]==str2[i-1])
			{
				record[i*m+j]=record[(i-1)*m+(j-1)]+1;
			}
			else 
			{
				record[i*m+j]=0;
			}
		}
	}
	int max=0;
	for(i=1;i<m*n;i++)
	{
		if(record[i]>max)
		{
			max=record[i];
			j=i;
		}
	}
	j=j%m-max;
	char *ret=(char *)malloc(max+1);
	strncpy(ret,str1+j,max);
	ret[max]=0;
	free(record);
	return ret;
 } 
 int main()
 {
 	const char *str1="adhhj";
 	const char *str2="kafj";
 	char *ret=lcs(str1,str2);
 	printf(ret);
 	free(ret);
 	return 0;
 	
 }*/
 //找最大公共子串问题
 #include<iostream>
 #include<cstring>
 #include<string>
 #include<algorithm>
 using namespace std;
 const int maxn=200000; 
 void radix(int *str,int *a,int *b,int n,int m)
 {
 	static int count[maxn];
 	memset(count,0,sizeof(count));
 	for(int i=0;i<n;i++)
 	{
 		++count[str[a[i]]];
	 }
	 for(int i=1;i<=m;i++)
	 {
	 	count[i]+=count[i-1];
	 }
	 for(int i=n-1;i>=0;i--)
	 {
	 	b[--count[str[a[i]]]]=a[i];
	 }
 }
 void suffix_array(int *str,int *sa,int n,int m)
 {
 	static int rank[maxn],a[maxn],b[maxn];
 	for(int i=0;i<n;i++)
 	{
 		rank[i]=1;
	 }
	 radix(str,rank,sa,n,m);
	 rank[sa[0]]=0;
	 for(int i=1;i<n;i++)
	 {
	 	rank[sa[i]]=rank[sa[i-1]]+(str[sa[i]]!=str[sa[i-1]]);
	 }
	 for(int i=0;1<<i<n;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{
	 		a[j]=rank[j]+1;
	 		b[j]=j+(1<<i)>=n?0:rank[j+(1<<i)]+1;
	 		sa[j]=j;
		 }
		 radix(b,sa,rank,n,n);
		 radix(a,rank,sa,n,n);
		 rank[sa[0]]=0;
		 for(int j=1;j<n;j++)
		 {
		 	rank[sa[j]]=rank[sa[j-1]]+(a[sa[j-1]]!=a[sa[j]]||b[sa[j-1]]!=b[sa[j]]);
		 }
	 }
 }
 int work(string a,string b)
 {
 	static int s[maxn],sa[maxn],h[maxn],rank[maxn];
 	string str;
 	str=a+"#"+b;//用一个不属于a，b的字符把两个字符连接起来。 
    copy(str.begin(),str.end(),s);
	suffix_array(s,sa,str.length(),str.length()+256);
	for(int i=0;i<str.length();i++)
	{
		rank[sa[i]]=i;
	}
	int curH=0;
	for(int i=0;i<str.length();i++)
	{
		curH=curH==0?0:curH-1;
		if(rank[i]!=0)
		{
			while(str[i+curH]==str[sa[rank[i]-1]+curH])
			{
				++curH;
			}
		}
		else 
		{
			curH=0;
		}
		h[rank[i]]=curH;
	}
	int ans=0,pos;
	for(int i=1;i<str.length();i++)
	{
		if(h[i]>ans&&(sa[i-1]<a.length())!=(sa[i]<a.length()))
		{
			ans=h[i];
			pos=sa[i];
		}
	}
   return str.substr(pos,ans).size()-1;
	
 }
 int main()
 {
 	while(1)
 	{
 	string a,b;
 	work(a,b);
 }
 	return 0;
  } 
 
