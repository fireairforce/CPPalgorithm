#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int a[27];
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    int x;
    cin>>x;
    int flag=0;
    for(int i=0;i<n;i++){
        if(x<=a[i]){
           flag=i+1;
           break;
        }
    }
    cout<<flag<<endl;
    bool flag1=0;
    for(int i=0;i<n;i++){
        if(x<=a[i]&&(!flag1)){
            cout<<x<<" ";
            flag1=1;
        }
          cout<<a[i]<<" ";
    }
    return 0;
}
