#include<bits/stdc++.h>
using namespace std;
int main()
{
	int air(int a,int b);//�����Լ����շת���
	int force(int a,int b);//����С��������
	int a,b,c,d;
	cin>>a>>b;
	c=air(a,b);
	d=force(a,b);
	printf("%d %d\n",c,d);
	return 0;
}
int air(int a,int b)
{
	if(a%b==0) return b;
	return air(b,a%b);
}
int force(int a,int b)
{
	int c;
 return c=(a*b)/air(a,b);

}
