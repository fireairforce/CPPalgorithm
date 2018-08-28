#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
struct code
{
    int x;
    int y;
    int z;
}q[maxn];
bool cmp(const code&a1, const code&a2)
{
    if(a1.x==a1.x)
    {
        if(a1.y==a2.y)
        {
            return a1.z<a2.z;
        }
        return a1.y<a2.y;
    }
    return a1.z<a2.z;
}
int main()
{

  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);

  }

  return 0;
}
