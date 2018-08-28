#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
int q;
int a[10]={0,0,8,2,6,4,4,6,2,8};
string s;
unsigned long long m=0;
cin>>q;
for(int i=1;i<=q;i++)
{
 cin>>s;
 int zomm=s.size();
 int m=s[zomm]-'0';
  
   cout<<a[m]<<endl;
}
return 0;
} 
