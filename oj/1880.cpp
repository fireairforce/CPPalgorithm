#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int a[300]={0};
    for(int i=0;i<300;i++)
    {
        a[i]=0;
    }
    int len=s.size();
    int kongge=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            kongge++;
        }
        else if('A'<=s[i]&&s[i]<='Z')
        {
            a[s[i]-'A'+'a']++;
        }
        else
        {
            a[s[i]]++;
        }
    }
    cout<<"[Space]: "<<kongge<<endl;
    for(int i=0;i<300;i++)
    {
        if(a[i]!=0)
        {
            cout<<(char)i<<": "<<a[i]<<endl;
        }
    }
    return 0;
}
