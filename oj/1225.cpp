#include<bits/stdc++.h>
#define MAX(a,b) a>b?a:b
#define max 100
using namespace std;
int LCSLength( int m , int n , char *x , char *y , char b[][max] )
{
int i , j ,k;
 int c[max][max];
 for( i = 1 ; i <= m ; i++ )
 {
     c[i][0] = 0;
 }
 for( i = 1 ; i <= n ; i++ )
 {
     c[0][i] = 0;
 }
for( i = 1 ; i <= m ; i++ )
 {
     for( j = 1 ; j <= n ; j++ )
       {

            if( x[i-1] == y[j-1] )
                {
                    c[i][j] = c[i-1][j-1] + 1;
                    b[i][j] = '\\';

                       }
          else if( c[i-1][j] >= c[i][j-1] )
                {
                    c[i][j] = c[i-1][j];
                b[i][j] = '|';

                     }
           else
                  {
                        c[i][j] = c[i][j-1];
                       b[i][j] = '-';

                      }
       }

   }
    k=c[m][n];
    return k;
 }
int main()
{
    char s1[100001],s2[100001];
    int n,m,len;
    while(cin>>s1>>s2)
    {
         m=strlen(s1);
         n=strlen(s2);
        len=MAX(n,m);
         char b[max][max] = {0};
         if(strcmp(s1,s2)==0) printf("%d\n",n-m);
         else printf("%d\n",len-LCSLength( m , n , s1 , s2 , b ));
    }
 return 0;
}
