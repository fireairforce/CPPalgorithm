#include<bits/stdc++.h>
#define pi acos(-1.0)
double max(double x,double y)
{
    return x>y?x:y;
}
using namespace std;
int main()
{
    double a,b,c;
    //a三角形，b圆，c正方形。
    while(cin>>a>>b>>c)
    {
        double S1=sqrt(3)/4*a*a;
        double S2=pi*b*b;
        double S3=c*c;
        //cout<<S1<<" "<<S2<<" "<<S3<<endl;
        double M=max(S1,S2);
        double N=max(S3,M);
        if(N==S1)
        {
            cout<<"triangle"<<endl;
        }
        else if(N==S3)
        {
            cout<<"square"<<endl;
        }
        else if(N==S2)
        {
            cout<<"circle"<<endl;
        }
    }
    return 0;
}
