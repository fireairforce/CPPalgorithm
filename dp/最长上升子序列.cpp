//���˼·�������ÿ���������Ԫ����Ϊ��β������������еĴ�С������dp�������档
//���ö�̬�滮������������������
#include<bits/stdc++.h>
const int maxn=10007;
int dp[maxn],a[maxn];
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        dp[i]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(a[i]>a[j])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    cout<<*max_element(dp+1,dp+n+1)<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+7;
int dp[maxn],a[maxn];
int main()
{
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        dp[i]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(a[i]>a[j])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    cout<<*max_element(dp+1,dp+n+1)<<endl;
    return 0;
}
