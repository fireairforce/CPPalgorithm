#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    int sum=0;
    for(int i=10;i<=99;i++)
    {
        for(int j=1;j<=i;j++)
        {
            x=i/10;
            y=i%10;
            if((i-j)==27&&(y*10+x)==j)
            {
                sum++;
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
