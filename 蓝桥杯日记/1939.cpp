#include<iostream>
#include<cstring>                               //包含memset(数组名，0/-1（只能是将数组中所有元素初始化这两个数），sizeof(数组名))
#include<algorithm>                             //算法头文件，其中包含许多好用的库函数
using namespace std;
int a[120]={-1},book[20]={0},sum=0;          //book数组是用来标记1-13哪个数已经被用过了，用过则记为1，否则记为0；
void dfs(int x)
{

      if(x>3&&a[1]+a[2]!=a[3])           //如果前三个数已经被取出来但不符合题设条件，则返回重找
            return;
        if(x>6&&a[4]-a[5]!=a[6])           //若前三个数满足第一条，看4-6个数是否满足第二个条件
            return;
        if(x>9&&a[7]*a[8]!=a[9])             //同上
            return;
        if(x>12&&a[12]*a[11]==a[10])        //如果所有条件均满足，则让sum++
        {
            sum++;
            return;
        }

    for(int i=1;i<14;i++)                     //将1-13放入每一个格子中
    {
        if(book[i]==0)                     //若该数字没被用过则可以用，进入下一步
        {
            a[x]=i;
            book[i]=1;
            dfs(x+1);
            book[i]=0;
        }
    }
    return;
}
int main()
{
    memset(a,-1,sizeof(a));
    dfs(1);
    cout<<sum;
    return 0;
}
