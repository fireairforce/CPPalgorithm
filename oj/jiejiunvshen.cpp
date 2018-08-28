#include<bits/stdc++.h>
using namespace std;
const double eps=1e-8;
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if(a)
        {
           if(4*b*b-12*a*c<=0)
           {
               printf("1\n");
           }
           else
           {
               double x1=(-1*2*b+sqrt(4*b*b-12*a*c))/(6*a);
               double x2=(-1*2*b-sqrt(4*b*b-12*a*c))/(6*a);
               double x=a*x1*x1*x1+b*x1*x1+c*x1+d;
               double y=a*x2*x2*x2+b*x2*x2+c*x2+d;
               if(x*y>eps)
               {
                   printf("1\n");
               }
               else if(fabs(x*y)<=eps)
               {
                   printf("2\n");
               }
               else printf("3\n");
           }
        }
        else if(!a&&b)
        {
            if(c*c-4*b*d==0)
            {
                printf("0\n");
            }
            else if(c*c-4*b*d==0)
            {
                printf("1\n");
            }
            else printf("2\n");
        }
        else if(!a&&!b&&c)
        {
            printf("1\n");
        }
        else if(!a&&!b&&!c&&d)
        {
            printf("0\n");
        }
        else if(!a&&!b&&!c&&!d)
        {
            printf("");
        }
    }
    return 0;
}
