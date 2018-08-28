#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(cin>>a)
    {
        int len=a.size();
        for(int i=0;i<len;i++)
        {
            if('a'<=a[i]&&a[i]<='z')
            {
                a[i]=a[i]-'a'+'A';
            }
            else if('A'<=a[i]&&a[i]<='Z')
            {
                a[i]=a[i]-'A'+'a';
            }
        }
        for(int i=0;i<len;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
