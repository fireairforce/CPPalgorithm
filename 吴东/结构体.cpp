#include<iostream>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<cstdio>
typedef long long ll;
const int maxn=1000000;
ll a[maxn],b[maxn];
using namespace std;
void FindMostTimesDigit(int *Src , int SrcLen)  
{  
    int element , has = SrcLen;  
    int MaxNum , TempCount = 0 , MaxCount = 0;  
    int i , j;  
    int *result = new int[maxn];  
    while(has != 0)  
    {  
        element = Src[has - 1];  
        TempCount = 0;  
        for(i = has - 1 ; i >= 0 ; --i)  
        {  
            //如果找到，则计数加1 ，然后将数据和末尾交换  
            //这也是为何要从末尾开始循环的理由  
            if(element == Src[i])  
            {  
                TempCount++;  
                Src[i] = Src[has - 1];  
                has--;  
            }  
        }  
  
        if(TempCount > MaxCount)  
        {  
            MaxCount = TempCount;  
            MaxNum = 0;  
            result[MaxNum] = element;  
        }  
        else if(TempCount == MaxCount)  
        {  
            result[++MaxNum] = element;  
        }  
    }  
  
    cout<<MaxCount<<endl;
    for(j = 0 ; j <= MaxNum ; ++j)  
        printf("%d " , result[j]);  
    printf("\n");  
  
}
int main()
{
	ll n,k;
	ll m,i,j;
	ll zoom,air;
	while(cin>>n>>k)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(i=1;i<=n;i++)
		{
			cin>>b[i];
		for(j=b[i]-k;j<=b[i]+k;j++)
		{
			a[j]++;
		}
		}
	    sort(b+1,b+n+1);
	    air=-1;
	    for(i=b[1]-k;i<=b[n]+k;i++)
	    {
	    	air=max(air,a[i]);
		}
		cout<<i<<" "<<air<<endl;
		air=-1;
	}
	return 0;
}
