#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char str1[1024*1024],str2[8],str3[8];
    int n,count=0,flag=1;
    cin>>str1;
    cin>>n;
    while(n--)
    {
        cin>>str2;
        sort(str2,str2+8);
        int len=strlen(str1);
        for(int i=0;i<len-7;i++){
            flag=1;
            for(int j=0,k=i;j<8,k<i+8;j++,k++)
             str3[j] = str1[k];
            sort(str3,str3+8);
            for(int j=0;j<8;j++){
                if(str3[j] != str2[j]){
                 flag=0;
                  break;
            }
            }
            if(flag == 1)
             count++;
        }
    }
    printf("%d\n",count);
    cout<<count<<endl;
    return 0;
}
