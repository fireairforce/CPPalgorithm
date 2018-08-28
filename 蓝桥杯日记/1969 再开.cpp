#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
    int n,i,j,m,x,y,g,h,b,z;
    char str[100];
    char a[100];
    while(cin>>b)
    {
        for(z=1; z<=b; z++)
        {
            {
                cin>>str;
                n=strlen(str);
                for(i=0; i<=n-1; i++)
                {
                    if(str[i]=='C')
                        j=i+1;
                }
                x=0;
                for(i=j; i<=n-1; i++)
                {
                    m=str[i]-48;
                    x=10*x+m;
                }
                y=x%26;
                g=x/26;
                if(y==0)
                {
                    y=26;
                    g=g-1;
                }
                a[0]=g+64;
                a[1]=y+64;
                {
                    h=2;
                    for(i=1; i<=j-2; i++)
                    {
                        a[h++]=str[i];
                    }
                }
                {
                    if(g<1)
                    {
                        for(i=1; i<=j-1; i++)
                            cout<<a[i];
                        cout<<endl;
                    }
                    else if(g>=1)
                    {
                        for(i=0; i<=j-1; i++)
                            cout<<a[i];

                        cout<<endl;

                    }

                }

            }

        }

        cout<<endl;

    }

    return 0;

}
