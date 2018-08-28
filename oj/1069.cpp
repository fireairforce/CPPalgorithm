#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string a;
    getline(cin,a);
    int len=a.size();
    int zimu=0;
    int num=0;
    int blank=0;
    int other=0;
    for(int i=0;i<len;i++)
    {
        if('a'<=a[i]&&a[i]<='z'||'A'<=a[i]&&a[i]<='Z')
        {
            zimu++;
        }
        else if('0'<=a[i]&&a[i]<='9')
        {
            num++;
        }
        else if(a[i]==' ')
        {
            blank++;
        }
        else other++;
    }
    cout<<zimu<<" "<<num<<" "<<blank<<" "<<other<<" "<<endl;
    return 0;
}
