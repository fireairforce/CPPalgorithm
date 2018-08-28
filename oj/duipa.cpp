#include<bits/stdc++.h>
using namespace std;

int rec[1200]; char ans[1200]; int a[1200]; int b[1200];

int plu(int d)

{

int cnt=d;

for(int i=0; i<d; i++)

{

b[i]=a[d-1-i];

}

int up=0;

for(int i=0; i<d; i++)

{

rec[i]=(a[i]+b[i]+up)%10; up=(a[i]+b[i]+up)/10;

}

if(up)

{

rec[d]=up;

cnt++;

}

return cnt;

}

bool IsP(int d)

{

for(int i=0; i<d/2; i++)

{

if(rec[i]!=rec[d-1-i])	return false;

}

return true;

}

bool Is(int d)

{

for(int i=0; i<d/2; i++)

{

if(a[i]!=a[d-1-i])	return false;

}

return true;

}

void print(int d1,int d2)

{

for(int i=0; i<d1; i++)

{

cout<<a[d1-1-i];

}

cout<<" + ";

for(int i=0; i<d1; i++)

{

cout<<b[d1-1-i];

}

cout<< " = ";

for(int i=0; i<d2; i++)

{

cout<<rec[d2-1-i];

}

cout<<endl;

}

int main()

{

while(cin>>ans)

{

//cin>>ans;

int len=strlen(ans); for(int i=len-1; i>=0; i--)

{

a[i]=ans[len-1-i]-'0';

}

if(Is(len))

{

for(int i=0; i<len; i++)

{

cout<<a[len-1-i];

}

cout<<" is a palindromic number.\n"; continue;

}

bool flag=0; int d1=len; int d2;

for(int w=0; w<10; w++)

{

d2=plu(d1);

print(d1,d2); if(IsP(d2))

{

for(int i=0; i<d2; i++)

{

cout<<rec[d2-1-i];

}

cout<<" is a palindromic number.\n"; flag=1;

break;

}

d1=d2;

for(int i=0; i<d1; i++)

{

a[i]=rec[i];

}

}

if(!flag) cout<<"Not found in 10 iterations.\n";

}

return 0;

}
