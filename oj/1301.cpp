#include<bits/stdc++.h>
const int maxn=1000;
int a[maxn][maxn];
using namespace std;
int main()
{
    string s1;
    int c1[3]={0,0,0};
    cin>>s1;
    while(cin>>s1)
    {
        if(s1.empty()!=0)
        {
            cout<<0<<endl;
            return 0;
        }
    }
    int len=s1.size();
    for(int i=0,j=len-1;i<len&&j>=0;)
    {
        if(s1[i]==s1[j])
        {
            i++;
            j--;
            c1[0]++;
        }
        else
        {
            c1[0]=0;
            i++;
            j=len-1;
        }
    }
    for(int i=0,j=len-1;i<len&&j>=0;)
    {
        if(s1[i]==s1[j])
        {
            i++;
            j--;
            c1[1]++;
        }
        else
        {
            c1[1]=0;
            j--;
            i=0;
        }
    }
     for(int i=0,j=len-1;i<len&&j>=0;)
    {
        if(s1[i]==s1[j])
        {
            i++;
            j--;
            c1[2]++;
        }
        else
        {
           i++;
           j--;
        }
    }
    int max=c1[0];
    if(max<c1[1])
    {
        max=c1[1];
    }
    if(max<c1[2])
    {
        max=c1[2];
    }
    cout<<max<<endl;
    return 0;
}
