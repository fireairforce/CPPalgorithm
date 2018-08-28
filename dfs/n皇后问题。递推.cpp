#include<iostream>
#include<cstring>
#include<iomanip>
#include<cmath>
#include<time.h>
#include<cstdio>
const int maxn=1007;
using namespace std;
int queenPos[maxn];
int N;
int counnt=0;
void NQueen(int k)
{
    int i;
    if(k==N)
    {
        counnt++;
       /* for(i=0;i<N;i++)
        {
            cout<<queenPos[i]+1<<" ";
        }
        cout<<endl;*/
    }//边界条件。
    for(i=0;i<N;i++)//对每一行所有列的位置进行尝试。
    {
        int j;
        for(j=0;j<k;j++)
        {
            if(queenPos[j]==i||abs(queenPos[j]-i)==abs(k-j))
            {
                break;
            }
        }
        if(j==k)
        {
            queenPos[k]=i;
            NQueen(k+1);
        }
    }
}
int main()
{
    int force[12];
    memset(force,0,sizeof(force));
    int emm=0;
    for(N=1;N<=10;N++)
    {
        counnt=0;
        NQueen(0);
        force[++emm]=counnt;
    }
    int n;
   while(cin>>n,n)
   {
     cout<<force[n]<<endl;
     printf("Time used=%.2f\n",(double)clock()/CLOCKS_PER_SEC); 
    }
    return 0;
}
