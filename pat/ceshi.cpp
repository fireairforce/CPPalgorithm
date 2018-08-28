#include<bits/stdc++.h>
using namespace std;
int c[10007];
int part(int low, int high)
{
    int pivot = c[low];
    while(low < high){
        while(low < high&&c[high] >= pivot) high--;
        c[low] = c[high];
        while(low < high&&c[low] <= pivot) low++;
        c[high] = c[low];
    }
    c[low]=pivot;
    return low;
}

int quicksort(int l, int r, int k){
    int pos = part(l,r);
    if(pos - l + 1 == k) return c[pos];
    else if(pos - l + 1> k) return quicksort(l,pos-1,k);
    else return quicksort(pos+1,r,k-(pos-l+1));
}
int main()
{
    int n,m,k;
    int a[10007],b[10007];
    while(scanf("%d%d%d",&n,&m,&k)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1;i<=m;i++)
        {
            scanf("%d",&b[i]);
        }
        int zoom=0;

       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
                c[zoom++]=a[i]*b[j];
           }
       }
    int x=quicksort(0,n-1,n-k);
    printf("%d\n",x);
    printf("\n");
    }
    return 0;
}

