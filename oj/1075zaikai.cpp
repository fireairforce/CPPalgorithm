#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[4];
    for(int i=0;i<3;i++)
    {
      scanf("%lf",&a[i]);
    }
  printf("%.3lf\n",*max_element(a,a+4));
   printf("%.3lf\n",*max_element(a,a+4));
    return 0;
}
