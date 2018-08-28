#include<bits/stdc++.h>
using namespace std;
struct code
{
    int year;
    int month;
    int day;
}emm;
int a2[13]={31,28,31,30,31,30,31,31,30,31,30,31};
int a1[13]={31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int sum1=0;
    int sum2=0;
    cin>>emm.year>>emm.month>>emm.day;
    if(emm.year%400==0||(emm.year%4==0&&emm.year%100!=0))
    {
        for(int i=0;i<emm.month-1;i++)
        {
            sum1+=a1[i];
        }
        cout<<sum1+emm.day<<endl;
    }
    else
    {
         for(int i=0;i<emm.month-1;i++)
        {
            sum2+=a2[i];
        }
        cout<<sum2+emm.day<<endl;
    }
    return 0;
}
