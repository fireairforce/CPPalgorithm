#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
    	cout<<"1"<<endl;
	}
	else if(n==0)
	{
		exit(0);
	}
	else 
	{
		int s=n/2;//�൱�ڰ�n=1��n=2������һ��������ηš� 
		if(s%2==0)
		{
			int x=s/2;//������Ǹ�ż�����2��4������������1��2�������� 
			int zan=4+(2*(x-1)+4)*(x-1);
			  cout<<zan<<endl;	
		}
		else 
		{
			int y=s/2+1;
			int wu=2+(2+2*(y-1))*(y-1);
			cout<<wu<<endl;
		}  
	}
	return 0;
}
