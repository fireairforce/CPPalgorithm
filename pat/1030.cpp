#include<bits/stdc++.h>
using namespace std;
const long MAX = 100000;
int main(){
    int N, least = 0;
    double P,temp,rank[MAX];
    scanf("%d", &N);
    scanf("%lf", &P);
    int i, j;
    for (int i = 0; i != N; i++){
        scanf("%lf", &rank[i]);
    }
    sort(rank, rank+N);
    for (i = 0; (i + least )< N; i++)
        {
        for ( j = i+least-1; j < N; j++)
        {
            if (rank[j] > (P*rank[i]))  break;
            if (j-i+1 > least)  least = j-i+1;;
        }
    }
    printf("%d", least);
    return 0;
}
