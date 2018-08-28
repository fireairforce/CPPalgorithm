#include<bits/stdc++.h>
using namespace std;
const int Max = 100000007;
const int MaxSum = 1e6;
int n, s, a, b;
int number[2][MaxSum];
int dp(int maxTimes)
{
    int i, j;
    for(j = 1 ; j <= maxTimes ; ++j)
    {
        number[0][j] = 0;
    }
    number[0][0] = 1;
    int cur = 1;
    for(i = 1 ; i < n ; ++i)
    {
        number[cur][0] = 1;
        for(j = 1 ; j < i ; ++j)
        {
            number[cur][j] = number[1-cur][j];
        }
        for(j = i ; j <= maxTimes ; ++j)
        {
            number[cur][j] = number[1-cur][j]+number[1-cur][j-i];
        }
        cur = 1-cur;
    }
    cur = 1-cur;
    for(j = 0, i = 0 ; j <= maxTimes ; ++j)
    {
        if((s-j*a-maxTimes*b+j*b)%n == 0)
        {
            i += number[cur][j];
            i %= Max;
        }
    }
    return i;
}
int main()
{
    scanf("%d%d%d%d", &n, &s, &a, &b);
    int maxTimes = (n-1)*n/2;
    cout << dp(maxTimes) << endl;
    return 0;
}
