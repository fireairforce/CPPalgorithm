#include<bits/stdc++.h>
using namespace std;
int n;
int apple(int x)
{
	if(n==2||n==3)
	{
		return 2; 
	}
	else  return (apple(x/2)+2);
}
int main()
{
    cin>>n;
    if(n==1)
   {
   	cout<<1<<endl;
   }
   else
   {
   cout<<apple(n)<<endl;
}
	return 0;
} 
