#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    a=abs(a);
    b=abs(b);
    a=pow(a,7);
    b=pow(b,7);
    printf("%.3lf\n%.3lf\n",a,b);
    return 0;
}
