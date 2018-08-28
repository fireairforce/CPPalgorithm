#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=n;
    char a,b;
    int a1=0,a2=0,a3=0;
    int g[100]={0};
    int h[100]={0};
    while(n--)
    {
        cin>>a>>b;
        if(a!=b)
        {
            if(a=='C'&&b=='J')
            {
               a1++;
               g[a-'0']++;
            }

            if(a=='B'&&b=='C')
            {
                a1++;
                g[a-'0']++;
            }
            if(a=='J'&&b=='B')
            {
                a1++;
                g[a-'0']++;
            }
            if(a=='B'&&b=='J')
            {
                a3++;
                h[b-'0']++;
            }
            if(a=='C'&&b=='B')
            {
                a3++;
                h[b-'0']++;
            }
            if(a=='J'&&b=='C')
            {
                a3++;
                h[b-'0']++;
            }

        }
        else
          a2++;
    }

    cout<<a1<<" "<<a2<<" "<<a3<<endl;
    cout<<a3<<" "<<a2<<" "<<a1<<endl;
    int max1=-1;
    int max2=-1;
    int p,q;
    for(int i=0;i<100;i++)
    {
        if(g[i]>max1)
        {
            max1=g[i];
            p=i;
        }

        if(h[i]>max2)
        {
            max2=h[i];
            q=i;
         }
    }
    if(p==0)
      cout<<"B"<<" ";
    else
      cout<<char(p+'0')<<" ";
    if(q==0)
      cout<<"B";
    else
      cout<<char(q+'0')<<endl;
    return 0;
}
