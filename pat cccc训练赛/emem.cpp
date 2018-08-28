#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a;
    scanf("%f",&a);
    if(a<60&&a>=0)
    {
        printf("E\n");
    }
    else
    {
        switch((int)a/10)
        {
        case 10:
        case 9: printf("A\n"); break;
        case 8: printf("B\n"); break;
        case 7: printf("C\n"); break;
        case 6: printf("D\n"); break;
        default: printf("error\n");
        }
    }
    return 0;
}
