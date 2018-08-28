#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
double q[6];
double p[6];
double cunqu1[10],cunqu2[10];
double cunqu3[10],cunqu4[10];
int main()
{
    while(cin>>q[0])
    {
            double r1=0;//记录pj。
            double r2=0;//记录czh。
            double sum1=0;
            double sum2=0;//记录分数
            for(int i=1;i<6;i++)
            {
                cin>>q[i];
            }
            for(int j=0;j<6;j++)
            {
                cin>>p[j];
            }
            if(q[0]==-100)
            {
                break;
            }
            else
            {
                int emm1=0,emm2=0,emm3=0,emm4=0;
                for(int i=0;i<6;i+=2)
                {
                    cunqu1[emm1++]=q[i];
                    cunqu3[emm3++]=p[i];
                }
                for(int i=1;i<6;i+=2)
                {
                    cunqu2[emm2++]=q[i];
                    cunqu4[emm4++]=p[i];
                }
                for(int i=0;i<3;i++)
                {
                    r1=sqrt(cunqu1[i]*cunqu1[i]+cunqu2[i]*cunqu2[i]);
                    if(r1<=3.0)
                {
                    sum1+=100;
                }
                else if(3.0<r1&&r1<=6.0)
                {
                    sum1+=80;
                }
                else if(6.0<r1&&r1<=9.0)
                {
                    sum1+=60;
                }
                else if(9.0<r1&&r1<=12.0)
                {
                    sum1+=40;
                }
                else if(12.0<r1&&r1<=15.0)
                {
                    sum1+=20;
                }
                else
                {
                   sum1+=0;
                }
                }
               for(int i=0;i<3;i++)
               {
                r2=sqrt(cunqu3[i]*cunqu3[i]+cunqu4[i]*cunqu4[i]);
                if(r2<=3.0)
                {
                    sum2+=100;
                }
                else if(3.0<r2&&r2<=6.0)
                {
                    sum2+=80;
                }
                else if(6.0<r2&&r2<=9.0)
                {
                    sum2+=60;
                }
                else if(9.0<r2&&r2<=12.0)
                {
                    sum2+=40;
                }
                else if(12.0<r2&&r2<=15.0)
                {
                    sum2+=20;
                }
                else
                {
                    sum2+=0;
                }
               }
            if(sum1==sum2)
            {
                cout<<"SCORE: "<<sum1<<" to "<<sum2<<", TIE."<<endl;;
            }
            else if(sum1>sum2)
            {
                cout<<"SCORE: "<<sum1<<" to "<<sum2<<", PLAYER 1 WINS."<<endl;;
            }
            else if(sum1<sum2)
            {
                cout<<"SCORE: "<<sum1<<" to "<<sum2<<", PLAYER 2 WINS."<<endl;
            }
            }

    }
    return 0;
}
