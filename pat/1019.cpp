#include<bits/stdc++.h>
using namespace std;
int powmod(int a,int b)
{
    int ans=1,base=a;
    while(b!=0)
    {
        if(b&1!=0)
        {
            ans*=base;
        }
        base*=base;
        b>>=1;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[5];
    do{
        for(int i=0;i<=3;i++)
        {
            a[i]=0;
        }
        a[3]=n/1000;
        a[2]=(n-1000*a[3])/100;
        a[1]=(n-1000*a[3]-100*a[2])/10;
        a[0]=(n-1000*a[3]-100*a[2]-10*a[1]);
        sort(a,a+4);
        int x=0;
        int y=0;
        int k=0;
        for(int i=3;i>=0;i--)
        {
            cout<<a[i];
            y+=a[i]*powmod(10,k++);
        }
        cout<<" - ";
        for(int i=0;i<=3;i++)
        {
            cout<<a[i];
            x+=a[i]*powmod(10,i);
        }
        cout<<" = ";
        n=x-y;
        printf("%04d\n",n);
    }while(n!=6174&&n!=0);
    return 0;
}
