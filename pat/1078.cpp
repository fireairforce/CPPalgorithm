#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+7;
int main()
{
    char n,a[maxn];
    int b[150]={0};
    scanf("%c",&n);
    getchar();
    gets(a);
    if(n=='C')
    {
        for(int i=0;a[i];i++)
        {
            int counnt=0;
            while(a[i]==a[i+1])
            {
              i++;
              counnt++;
            }
            if(counnt)
            {
            cout<<counnt+1;
            }
            cout<<a[i];
        }
        cout<<endl;
    }
    else if(n=='D')
    {
        for(int i=0;a[i];i++)
        {
            int sum=0;
            while('0'<=a[i]&&a[i]<='9')
            {
                sum=sum*10+a[i++]-'0';
            }
            for(int j=0;j<sum;j++)
            {
                cout<<a[i];
            }
            if(!sum)
            {
                cout<<a[i];
            }
        }
    }
    return 0;
}
