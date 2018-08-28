#include<bits/stdc++.h>
using namespace std;
const double eps=1e-3;
int main()
{
    double r1,p1,r2,p2;
    scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
    double A=r1*r2*cos(p1+p2);
    double B=r1*r2*sin(p1+p2);
    if(abs(A)<eps)
    {
        A=0;
    }
    if(abs(B)<eps)
    {
        B=0;
    }
    if(B>=0)
    {
        printf("%.2lf+%.2lfi\n",A,B);
    }
    else
    {
        printf("%.2lf-%.2lfi\n",A,-B);
    }
    return 0;
}
