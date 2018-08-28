//时间处理上出了一些问题。
#include<bits/stdc++.h>
using namespace std;
int min(int a ,int b)
{
    return a>b?b:a;
}
int main()
{
    char zoom1[1007],zoom2[1007];
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    int k=0;
    int len1=a.size(),len2=b.size(),len3=c.size(),len4=d.size();
    int len5=min(len1,len2),len6=min(len3,len4);
    for(int i=0;i<len5;i++)
    {
        if(a[i]==b[i])
        {
             if(k==0&&'A'<=a[i]&&a[i]<='G')
             {
                zoom1[k++]=a[i];
             }
             else if(k==1&&('A'<=a[i]&&a[i]<='N'||'0'<=a[i]&&a[i]<='9'))
             {
                 zoom1[k++]=a[i];
             }
        }
        if(k==2)
        {
                 break;
        }
    }
    int flag=0;
    for(int i=0;i<len6;i++)
    {
        if(c[i]==d[i]&&('a'<=c[i]&&c[i]<='z'||'A'<=c[i]&&c[i]<='Z'))
        {
            flag=i;
            break;
        }
    }
    if(zoom1[0]-'A'==0)
    {
        cout<<"MON";
    }
    else if(zoom1[0]-'A'==1)
    {
        cout<<"TUE";
    }
    else if(zoom1[0]-'A'==2)
    {
        cout<<"WED";
    }
    else if(zoom1[0]-'A'==3)
    {
        cout<<"THU";
    }
    else if(zoom1[0]-'A'==4)
    {
        cout<<"FRI";
    }
    else if(zoom1[0]-'A'==5)
    {
        cout<<"SAT";
    }
    else if(zoom1[0]-'A'==6)
    {
        cout<<"SUN";
    }
    cout<<" ";
    if('0'<=zoom1[1]&&zoom1[1]<='9')
    {
        cout<<0<<zoom1[1]-48;
    }
    else if('A'<=zoom1[1]&&zoom1[1]<='N')
    {
        cout<<zoom1[1]-'A'+10;
    }
    cout<<":";
    if(0<=flag&&flag<10)
    {
        cout<<0<<flag;
    }
    else
    {
        cout<<flag;
    }
    cout<<endl;
    return 0;
}
