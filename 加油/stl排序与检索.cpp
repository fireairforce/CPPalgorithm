#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	for(int a=1;a<=9;a++)
	{
		for(int b=0;b<=9;b++)
		{
			for(int c=0;c<=9;c++)
			{
				for(int d=0;d<=9;d++)
				{
					for(int e=0;e<=9;e++)
					{
						for(int m=0;m<=9;m++)
						{
							if((a*10000+b*1000+c*100+d*10+e)*m==(e*10000+d*1000+c*100+b*10+a))
							{
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<endl; 
							}
						}
					}
				}
			}
		 } 
	}
	return 0;
}
