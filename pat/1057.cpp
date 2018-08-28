#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
char a[maxn];
int b[maxn]={0},c[5]={0};
int main()
{
    gets(a);
    int sum=0,zoom=0;
    for(int i=0;a[i];i++)
    {
        if('A'<=a[i]&&a[i]<='Z')
        {
            a[i]=a[i]-'A'+'a';
        }
        if('a'<=a[i]&&a[i]<='z')
        {
            sum+=(a[i]-'a'+1);
        }
    }
   int num0=0,num1=0;
   while(sum!=0)
   {
       int yushu=sum%2;
       if(yushu==0)
       {
           num0++;
       }
       else num1++;
       sum/=2;
   }
   cout<<num0<<" "<<num1<<endl;
    return 0;
}
