#include<iostream>
const int maxn=1001;
int a[maxn];
using namespace std;
int main()
{
	int air(int a[],int starIndex,int endIndex,int n);
	int n;
	cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	int k;
	cin>>k;
	int c=air(a,2,5,2);
	cout<<c<<endl;
	return 0;
 } 
int air(int a[], int startIndex, int endIndex, int n)
{
    int midOne = a[startIndex];
    int i = startIndex, j = endIndex;
    if(i == j) //递归出口之一
       return a[i];
    if(i < j)
    {
        while(i < j)
        {
            for(; i < j; j--)
            if(a[j] < midOne)
            {
                a[i++] = a[j];
                break;
            }
            for(; i < j; i++)
            if(a[i] > midOne)
            {
                a[j--] = a[i];
                break;
            }
        }
        a[i] = midOne;//支点归位
        int th = endIndex - i + 1;//计算下标为i的数第几大
        if(th == n)//正好找到
        {
            return a[i];
        }
        else
        {
            if(th > n )//在支点右边找
                return air(a, i + 1, endIndex, n);
            else//在支点左边找第(n-th)大,因为右边th个数都比支点大
                return air(a, startIndex, i - 1, n - th);
        }
    }
    
}
