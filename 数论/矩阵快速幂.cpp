#include<bit/stdc++.h>
using namespace std;
const int maxn=1e3+7;
const int maxm=1e3+7;
int mod_pow(int a,int b)
{
    int ans=1,base=a;
    while(b!=0)
    {
        if(b%2!=0)
        {
            ans*=base;
        }
        base*=base;
        b>>=1;
    }
    return ans;
}
struct Matrix
{
    int n,m;
    int a[maxn][maxm];
    void clear()
    {
        n=m=0;
        memset(a,0,sizeof(a));
    }
    Matrix operator *(const Matrix &b) const
    {
        Matrix tmp;
        tmp.clear();
        tmp.n=n;
        tmp.m=b.m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<b.m;j++)
            {
                for(int k=0;k<m;k++)
                {
                    tmp.a[i][j]+=a[i][k]*b.a[k][j];
                }
            }
        }
     return tmp;
    }
};
int main()
{

    return 0;
}
