#include<iostream>
using namespace std;
int n;
int main()
{
	 void air();
    cin>>n;
   air();
}
void air()
{
	 int i;
	 for(i=2;i<n;i++)
	 {
        if(n%i==0)
		break;
    }
    if(i<n||n==1) cout<<"not prime";
    else cout<<"prime";
}
