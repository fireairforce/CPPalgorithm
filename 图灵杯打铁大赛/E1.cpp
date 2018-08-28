#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
int a[maxn]= {0};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(!k){
        if(a[0]==1)
        {
            cout<<-1<<endl;
        }else{
          cout<<1<<endl;
        }
    }
    else if(k==n) {cout<<a[n-1]<<endl;}
    else{
      if(a[k-1]==a[k])
      {
          cout<<-1<<endl;
      }
      else cout<<a[k-1]<<endl;
    }
    return 0;
}
