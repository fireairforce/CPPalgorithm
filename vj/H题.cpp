#include<cstdio>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int sum=0;
        for(int i=2;i<=n/2+1;i++)
        {
		    if(i%2==1&&n%i==0)//奇数情况。 
            {
                sum++;
            }
            else if(i%2==0&&n%2==i/2)//偶数。 
            {
                sum++;
            }
        }
        printf("%d\n",sum);
    }
    
    return 0;
}

