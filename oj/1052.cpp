#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int y=1;
    for(int i=1;i<n;i++)
    {
        y+=1;
        y*=2;
    }
    cout<<y<<endl;
   return 0;
}
