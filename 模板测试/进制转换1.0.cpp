#include<stdio.h>
#define N 1000
typedef long long TYPE;
 
TYPE gx(TYPE m, TYPE n)
{
    TYPE tmp;
    while(tmp=m%n)
    {
        m = n;
        n = tmp;
    }
    return n;
}
 
TYPE gb(TYPE m, TYPE n)
{
    return m*n/gx(m,n);
}
TYPE f(int n)
{
    TYPE CNT[N+1];
    TYPE IDX[N+1];
    TYPE i,j;
    TYPE tmp,max,idx;
    CNT[1] = 1;
    IDX[1] = 1;
    for (i=2;i<=n;i++)
    {
        max = i;
        idx = i;
        for (j=1;j<i;j++)
        {
            tmp = gb(j, CNT[i-j]);
            if (tmp>=max) 
            {
                max = tmp;
                idx = j;
            }
        }
        CNT[i] = max;
        IDX[i] = idx;
    }
    i = n;
    do
    {
        idx = IDX[i];
        i -= idx;
    }while(i);
    return CNT[n];
}
 
int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        printf("%d\n",f(n));
    }
    return 0;
}
