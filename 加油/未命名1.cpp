#include <stdio.h>
#include<math.h>
int gcd (int a,int b)
{
    if ( b == 0)
    return a ;
    else
    return gcd(b,a%b) ;
}

int is_fu_ze(int a,int b)
{
    if(gcd(a,b) == 1)
    return 1 ;
    else
    return 0 ;
}

int main(void)
{
    long x0,y0,i,j,k,total=0;
    
    scanf("%ld %ld",&x0,&y0);
    
    if( y0 % x0 != 0 || x0 == y0)
    {
       ( x0 == y0) ? printf("1 ") : printf("0 ");
       return 0 ;
    }
    
    k = y0 / x0 ;
    j = (int)sqrt((double)k) ;
    for(i=1 ; i<= j ; i++)
    if( k % i == 0 && is_fu_ze(i,k/i) )
    {
        total ++ ;
    }  
    printf("%d",total*2);
    return 0 ;
}

