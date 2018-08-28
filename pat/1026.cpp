#include<bits/stdc++.h>
using namespace std;
int main()
{
    double C1,C2;
    scanf("%lf%lf",&C1,&C2);
    double time =0;
    int hour=0,mins=0,sec=0;
    time=(C2-C1)/100;
    hour=time/3600;
    time-=(hour*3600);
    mins=time/60;
    time-=(mins*60);
    time*=10;
    time+=5;
    time/=10;
    sec=time;
    printf("%02d:%02d:%02d\n",hour,mins,sec);
    return 0;
}
