#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i*j+(j*(j-1))/2)==236)
            {
              sum++;
              cout<<i<<" "<<j<<endl;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
