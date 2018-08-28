#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count, i, k;
    char s[1010];
    while(~scanf("%s",s))
    {
        count = 0;
        k = strlen(s);
        for(i = 0; i < k; i++)
        {
            if(s[i] == '(')
            {
                count++;
            }
            else if(s[i] == ')')
                count--;
            else
                break;
        }
        printf("%d\n", count);
    }
    return 0;
}
