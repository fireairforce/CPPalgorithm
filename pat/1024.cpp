#include<bits/stdc++.h>
using namespace std;
int main()
{
     int e,t,i;
     char a[10050];
     scanf("%s",a);
     if(a[0]=='-')
     {
         printf("-");
     }
     int len1=strlen(a)-1;
     e=0;
     t=1;
     while((a[len1]!='+')&&(a[len1]!='-'))
     {
         e+=t*(a[len1]-'0');
         t*=10;
         len1--;
     }
     if(a[len1]=='-')
     {
         e*=-1;
     }
     t=0;
     if(e==0)
     {
         for(i=1;i<len1-1;i++)
         {
             printf("%c",a[i]);
         }
     }
     else if(e<0)
     {
         e*=-1;
         printf("0.");
         for(i=1;i<e;i++)
         {
             printf("0");
         }
         for(i=1;i<len1-1;i++)
         {
             if(a[i]!='.')
             {
                 printf("%c",a[i]);
             }
         }
     }
     else
     {
         for(i=1;i<len1-1;i++)
         {
             if(a[i]!='.')
             {
                 printf("%c",a[i]);
                 t++;
             }
             if((t-1==e)&&(t!=len1-3))
             {
                 printf(".");
             }
         }
         while(t<=e)
         {
             printf("0");
             t++;
         }
     }
    return 0;
}
