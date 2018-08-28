#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
bool prime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(i>=sqrt(n))
    {
        return 1;
    }
    else  return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    scanf("%d",&N);
    int counnt=0;
   for(int i=3;i<=N-2;i+=2)
   {
       if(prime(i))
       {
           if(prime(i+2))
           {
               counnt++;
           }
           else i+=2;
       }
   }
   printf("%d\n",counnt);
    return 0;
}
