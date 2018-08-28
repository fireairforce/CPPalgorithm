#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
int a[maxn]={0},b[maxn]={0};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,w;
    int sum=0;
    cin>>n>>w;
    int emm1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        b[emm1++]=sum;
    }
    if(n<2)
    {
       cout<<w-abs(b[0])+1<<endl;
    }
    else{
      sort(b,b+emm1);
      bool flag=0;
      for(int i=emm1;i>=0;i--){
        if(b[i]<0){
          flag=1;
          break;
        }
      }
    if(!flag){
         cout<<w-b[emm1-1]+1<<endl;
    }
    else{
        if(b[emm1-1]>0)
        {
            int emm2=w-b[emm1-1]+1;
          int emm3=abs(b[0]);
          cout<<emm2-emm3<<endl;
        }
        else if(b[emm1-1]<=0)
        {
            int emm3=abs(b[0]);
            cout<<w-emm3+1<<endl;
        }
    }
    return 0;
}
}
