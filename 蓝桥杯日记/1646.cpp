#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0,d;
    scanf("%d",&n);
     for(int a=0;a<=3000;a++)
     {
         for(int b=a;b<=3000;b++)
         {
             for(int c=b;c<=3000;c++)
             {
                 d=sqrt(n-a*a-b*b-c*c);
                 if(n==a*a+b*b+c*c+d*d)
                 {
                        if(c>d)
                 {
                     int temp=d;
                     d=c;
                     c=temp;
                 }
                 cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                flag=1;
                break;
                 }

             }
              if(flag) break;
         }
          if(flag) break;
     }
    return 0;
}
