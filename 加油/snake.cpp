#include<bits/stdc++.h>
using namespace std;
char a[10000];
int main()
{
	void zoom(char a[]);
	gets(a);
	zoom(a);
	return 0;
 } 
 void zoom(char a[])
 {
 	int len=strlen(a);
	 int x=0,y=0,m=0,n=0;
 	for(int i=0;i<len;i++)
 	{
 		if('a'<=a[i]&&a[i]<='b'||'A'<=a[i]&&a[i]<='Z')
 		{
 			x++;
		 }
		 else if('0'<=a[i]&&a[i]<='9')
		 {
		 	y++;
		 }
		 else if(a[i]==' ')
		 {
		 	m++;
		 }
		 else 
		 {
		 	n++;
		 }
	}
		 cout<<x<<" "<<y<<" "<<m<<" "<<n<<endl;	 
 }

