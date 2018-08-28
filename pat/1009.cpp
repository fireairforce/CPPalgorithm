//用一个特殊的小技巧，ch来进行吃掉回车的操作，从而使得可以进行。
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b[100];
    char ch;
    int emm=0;
    for(int i=1;;i++)
    {
        cin>>a;
        b[++emm]=a;
        ch=getchar();
        if(ch=='\n')
        {
            break;
        }
    }
    for(int k=emm;k>=1;k--)
    {
        cout<<b[k];
        if(k!=1)
         {
             cout<<" ";
         }
    }
  cout<<endl;
    return 0;
}
