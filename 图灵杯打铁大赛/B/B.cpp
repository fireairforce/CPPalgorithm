#include<iostream>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,b;
    int m,n;
    string s;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>k>>b)
    {
        getchar();
        getline(cin,s);
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            if('a'<=s[i]&&s[i]<='z')
            {
                m=(k*(s[i]-'a')+b)%26+'a';
                s[i]=m;
            }
            else if('A'<=s[i]&&s[i]<='Z')
            {
                n=(k*(s[i]-'A')+b)%26+'A';
                s[i]=n;
            }
        }
        for(int i=0;i<len;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
        s.clear();
    }
    return 0;
}
