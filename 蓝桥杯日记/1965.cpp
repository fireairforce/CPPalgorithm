#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
        if(n%2!=0)
        {
            int m=(n+1)/2;
            printf("%d\n",3*m-2);
        }
        else
        {
           int m=n/2;
           printf("%d\n",3*m-1);
        }

    return 0;
}
