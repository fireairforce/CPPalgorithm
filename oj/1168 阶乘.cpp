#include<bits/stdc++.h>
int main()
{
    int A[100000];
    int n=1977;
        memset(A,0,sizeof(A));
        A[0]=1;
        int len,i,j;
        len=0;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=len;j++)A[j]*=i;
            for(j=0;j<=len;j++)
            {
                if(A[j]>100000){
                    A[j+1]+=A[j]/100000;
                    A[j]%=100000;
                    if(j+1>len)len++;
                }

            }
        }
        printf("%d",A[len]);
        for(i=len-1;i>=0;i--)
            printf("%05d",A[i]);
        printf("\n");
    return 0;
}
