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
    if(i == j) //�ݹ����֮һ
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
        a[i] = midOne;//֧���λ
        int th = endIndex - i + 1;//�����±�Ϊi�����ڼ���
        if(th == n)//�����ҵ�
        {
            return a[i];
        }
        else
        {
            if(th > n )//��֧���ұ���
                return air(a, i + 1, endIndex, n);
            else//��֧������ҵ�(n-th)��,��Ϊ�ұ�th��������֧���
                return air(a, startIndex, i - 1, n - th);
        }
    }
    
}
