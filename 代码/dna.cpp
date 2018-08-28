#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int a,b;
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		 {
		 	cin>>a>>b;
		 	cout<<"X";
		 	for(int m=0;m<a-2;m++)
		 	{
		 		cout<<" ";
			 }
			 cout<<"X"<<endl;
			 int emm;
			 for(int o=0;o<b;o++)
			 {
			 	 emm=1;
				for(int p=0;p<(a-1)/2;p++)
			 	{
			 	for(int q=0;q<a;q++)
			 	 {
			 	 	if(q==emm||q==a-emm-1)
			 	 	{
			 	 		cout<<"X";
					  }
					 else if(q<a-emm-1&&q!=emm)
					  {
					  	cout<<" ";
					  }
					  else continue;
				  }
				  emm++;
				   cout<<endl;
               }
			 	 int hah;
			 	 hah=1; 
			 	 for(int r=(a-1)/2;r<a-1;r++)
			 	 {
			 	 	for(int s=0;s<a;s++)
			 	 	{
			 	 		if(s==a/2-hah||s==a/2+hah)
			 	 		{
			 	 			cout<<"X";
						  }
						 else if(s<a/2+hah&&s!=(a/2-hah))
						 {
						 		 cout<<" "; 
						 }
						 else continue;
					  }
					  hah++;
					  cout<<endl;
				  }
				  if(o==b-1)
				  {
				  		  cout<<endl;
				  }
			 }
		 }
	}
	return 0;
}
