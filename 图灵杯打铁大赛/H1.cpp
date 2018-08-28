#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
int a[maxn]={0};
char emm1,emm2;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string qaq;
    cin>>qaq;
    int len=qaq.size();
   for(int i=0;qaq[i];i++){
      emm1=qaq[len-1];
      emm2=qaq[len-2];
      a[(qaq[i]-'0')]++;
    }
    int zoom1=(int)(emm1-'0');
    int zoom2=(int)(emm2-'0');
    int zoom3=zoom2*10+zoom1;
    if(!(zoom3%25)){
       cout<<0<<endl;
    }
    bool flag1=0,flag2=0,flag3=0,flag4=0;
    for(int i=0;i<len;i++){
       if(qaq[i]=='0') flag1=1;
       if(qaq[i]=='2') flag2=1;
       if(qaq[i]=='5') flag3=1;
       if(qaq[i]=='7') flag4=1;
    }
    if(flag1&&a[0]>=2&&len>2){
       for(int i=0;i<len;i++)
       {

       }
    }
    else if(flag1&&flag3){


    }
    else if(flag3&&flag4){

    }
    else if(flag2&&flag3){

    }
    else cout<<-1<<endl;
    return 0;
}
