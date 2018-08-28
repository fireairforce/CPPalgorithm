#include<bits/stdc++.h>
#define maxn 1024*1024+7
using namespace std;
string change(char a[]){
    int i;
    string b;
    for(i=0;i<strlen(a);i++)
       b+=b[i];
    return b;
}
int main(){
    char str1[maxn],str2[8],str3[8];
    int n,sum=0,flag=1;
    cin>>str1;
    cin>>n;
    while(n){
        n--;
        cin>>str2;
        sort(str2,str2+8);
        for(int i=0;i<strlen(str1)-7;i++)
            {
            flag=1;
            for(int j=0,k=i;j<8,k<i+8;j++,k++)
             str3[j] = str1[k];
            sort(str3,str3+8);
            for(int j=0,s=0;j<8,s<8;j++,s++)
            {
                if(str3[j] != str2[s])
                {
                 flag=0;
                  break;
                 }
            }
            if(flag == 1)
             sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
