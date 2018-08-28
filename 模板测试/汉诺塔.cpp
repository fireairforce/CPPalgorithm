#include<iostream>
using namespace std;
int main()
{
	char WD,MD;
	int n;
	while(cin>>n)
	{
		for(int j=1;j<=n;j++)
		{
			for(int i=1;i<=n-j;i++)
			{
				cout<<" ";
			}
			int emm=0;
			for(int m=0;m<=j-1;m++)
			{
				WD='A'+emm;
			    cout<<WD;
			    emm++;
			}
			int hah=1;
			for(int k=0;k<=j-2;k++)
			{
				MD=WD-hah;
				cout<<MD;
				hah++;
			}
           cout<<endl;
		}
		
	}
	return 0;
}
