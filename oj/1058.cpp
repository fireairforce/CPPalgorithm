#include<bits/stdc++.h>
using namespace std;
string a;
void emm(string x)
{
    int len=a.size();
    int j=len-1;
    char b;
    int i=0;
    while(i<j)
    {
        b=a[i];
        a[i++]=a[j];
        a[j--]=b;
    }
}
int main()
{
    cin>>a;
    emm(a);
    cout<<a<<endl;
    return 0;
}
