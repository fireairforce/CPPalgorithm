#include<bits/stdc++.h>
using namespace std;
const int ten[4]={1,10,100,1000};
const int maxl=1000;
struct BigNumber
{
    int d[maxl];
    BigNumber(string s)
    {
        int len=s.size();
        d[0]=(len-1)/4+1;
        int i,j,k;
        for(i=1;i<maxl;i++) d[i]=0;
        for(i=len-1;i>=0;i--)
        {
            j=(len-i-1)/4+1;
            k=(len-i-1)%4;
            d[j]+=ten[k]*(s[i]-'0');
        }
    }
    BigNumber()
    {
        *this=BigNumber(string("0"));
    }
    string toString()
    {
        string s("");
        int i,j,temp;
        for(i=3;i>=1;i--) if(d[d[0]>=ten[i]) break;
        temp=d[d[0]];
        for(j=i;j>=0;j--)
        {
            s=s+(char)(temp/ten[j]+'0');
            temp%=ten[j];
        }
        for(i=d[0]-1;i>0;i--)
        {
            temp=d[i];
            for(j=3;j>=0;j--)
            {
                s=s+(char)(temp/ten[j]+'0');
                temp%=ten[j];
            }
        }

    }
};
int main()
{

    return 0;
}
