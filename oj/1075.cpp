#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
      scanf("%d",&a[i]);
    }
    cout<<*max_element(a,a+4)<<endl;
    return 0;
}
