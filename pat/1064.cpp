#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int N;
    char tmp[8];
    unsigned int i, j;
    int sum;
    int total = 0;
    int frNum[2<<6] = {0};
    int first = 1;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s", tmp);
        sum = 0;
        for (j = 0; tmp[j]; j++)
            sum += tmp[j]-'0';
        if (frNum[sum] == 0)
        {
            total++;
            frNum[sum] = 1;
        }
    }
    printf("%d\n", total);
    for (i = 0; i < 2<<6; i++)
    {
        if (frNum[i] == 1)
        {
            if (first == 0)
                printf(" ");
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
