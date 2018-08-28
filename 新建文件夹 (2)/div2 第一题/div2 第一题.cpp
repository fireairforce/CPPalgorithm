#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int find(char *arr, char *temp, int len_a, int len_t)
{ 
    if(len_a<=0||len_t<=0||len_a<=len_t)
    {
        return 0;
    }

    int count=0;
    int flag=0;
    for(int i=0;i<=len_a-len_t;i++)
    {
        flag=1;
        for(int j=0;j<len_t;j++)
        {
            if(arr[i+j]==temp[j])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
	char arr[10240];
    char temp[5]="hTh"; 
    scanf("%s",&arr);//Â¼Èë×Ö·û´® 
    int len_a=strlen(arr);//¼ÆËã×Ö·û´®³¤¶È 
    int len_t=strlen(temp);//¼ÆËã×Ö·û´®³¤¶È 
    int count=find(arr,temp,len_a,len_t);
    cout<<count<<endl;
    }
    return 0;
} 
