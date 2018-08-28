//打印大X 
#include<stdio.h>  
int main()  
{  
    int num,line; //num代表宽度，line代表高度。 
    char arr[1005][2020];  
    int column;  
    scanf("%d%d",&num,&line);  
    column=num+line-1;  
    for(int i=0;i<line;i++)  
    {  
        for(int j=0;j<column;j++)  
        {  
            arr[i][j]='.';  
        }  
    }  
    for(int i=0;i<line;i++)  
    {  
        for(int j=i;j<num+i;j++)  
        {  
            arr[i][j]='*';  
        }  
        for(int j=column-i-1;j>column-i-num-1;j--)  
        {  
            arr[i][j]='*';  
        }  
    }  
    for(int i=0;i<line;i++)  
    {  
        for(int j=0;j<column;j++)  
        {  
            printf("%c",arr[i][j]);  
        }  
        printf("\n");  
    }  
    return 0;  
}                           
