#include<bits/stdc++.h>
using namespace std;
char ch[1002];
int  c[1002];
int sum[1002];
int n;
int mod;
void init()
{
    int i;
    int len_ch = strlen(ch);
    for ( i = 0;i < len_ch; i++ )
    {
        c[i] = ch[i]-'0';
    }
    memset(sum, 0, sizeof(sum));
}
void bigNumDiv()
{
    int i;
    int len_ch = strlen(ch);
    mod = 0;
    for ( i = 0; i < len_ch; i++ )
    {
        sum[i] = (mod*10+ c[i])/n;
        mod = (mod*10+ c[i])%n;
    }
}
int main()
{
    int i;
    scanf ( "%s", ch );
    scanf ( "%d", &n );
    init();
    bigNumDiv();
    int len_ch = strlen(ch);
    for ( i = 0;i < len_ch-1; i++ )
    {
        if ( sum[i] != 0 )
            break;
    }
    for( i; i < len_ch; i++ )
    {
        printf ( "%d", sum[i] );
    }
    printf ( " %d\n", mod );
}
