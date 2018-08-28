#include<bits/stdc++.h>
using namespace std;
char ch[1010][10100];
int num[101000];
int main()
{
    int n,k;
    while (cin>>n)
    {
        k=0;
        getchar();
        for (int i=0; i<n; i++)
        {
            gets(ch[i]);
            int len=0;
            while(ch[i][len]!='\0') len++;
            int a=0;
            while(ch[i][len-1]==' ') len--;
            for (int j=0; j<len; j++)
            {
                if(ch[i][j]>='0'&&ch[i][j]<='9')
                {
                    a=a*10+ch[i][j]-'0';
                }
                if(ch[i][j]==' '&&ch[i][j-1]!=' ')
                {
                    num[k++]=a;
                    a=0;
                }
            }
            num[k++]=a;
        }
        sort(num,num+k);
        int flag=0;
        for (int i=1; i<k; i++)
        {
            if (num[i]>num[i-1]+1)
            {
                cout<<num[i]-1<<" ";
            }
        }
        for (int i=1; i<k; i++)
        {
            if (num[i]==num[i-1])
            {
                cout<<num[i]<<endl;
            }
        }
    }
    return 0;
}
