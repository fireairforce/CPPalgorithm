/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    set<string>a;
    string t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a.insert(t);
    }
    string c;
    cin>>c;
    if(a.count(c))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
*/
//set里面查询一个数是否存在就直接用emm.count()函数。
//set容器里面删除一个元素用a.earse.
//取模定理
//(m*n)%p=(m%p)*(n%p)%p;
/*#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+7;
char s[maxn];
int dp[maxn][maxn];
int main()
{
    scanf("%s",s+1);
    int n=strlen(s+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[i]==s[n+1-j])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    printf("%d\n",n-dp[n][n]);
    return 0;
}
*/
/*#include<bits/stdc++.h>
using namespace std;
const int maxn=1e3+7;
char s[maxn];
int dp[maxn][maxn];
int main()
{
    scanf("%s",s+1);
    int n=strlen(s+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[i]==s[n+1-j])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    printf("%d\n",n-dp[n][n]);
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod_pow(ll a,ll b)
{
    ll ans=1,base=a;
    while(b!=0)
    {
        if(b%2!=0)
        {
            ans*=base;
        }
        base*=base;
        b>>=1;
    }
    return ans;
}
int main()
{

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod_pow(ll a,ll b)
{
    ll ans=1,base=a;
    while(b!=0)
    {
        if(b%2!=0)
        {
            ans*=base;
        }
        base*=base;
        b>>=1;
    }
    return ans;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%lld\n",mod_pow(n,m));
    return 0;
}*/
//迷宫找最短路。
/*#include<bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    int y;
    int f;
    int s;
}que[2501];
int main()
{
   int a[51][51]={0},book[51][51]={0};
   int dir[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
   int head,tail;
   int i,j,k,n,m,startx,starty,p,q,tx,ty,flag=0;
   scanf("%d %d",&n,&m);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=m;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   scanf("%d %d %d %d",&startx,&starty,&p,&q);
   head=tail=1;
   que[tail].x=startx;
   que[tail].y=starty;
   que[tail].s=0;
   que[tail].f=0;
   tail++;
   book[startx][starty]=1;
   while(head<tail)
   {
       for(k=0;k<4;k++)
       {
           tx=que[head].x+dir[k][0];
           ty=que[head].y+dir[k][1];
           if(tx<1||tx>n||ty<1||ty>m)
           {
               continue;
           }
           if(a[tx][ty]==0&&book[tx][ty]==0)
           {
               book[tx][ty]=1;
               que[tail].x=tx;
               que[tail].y=ty;
               que[tail].f=head;
               que[tail].s=que[head].s+1;
               tail++;
           }
           if(tx==p&&ty==q)
           {
               flag=1;
               break;
           }
       }
       if(flag==1)
       {
           break;
       }
       head++;
   }
   printf("%d\n",que[tail-1].s);
   return 0;
}*/
//找一个单独的联通快
/*
#include<bits/stdc++.h>
using namespace std;
int a[51][51];
int book[51][51],n,m,sum;
void dfs(int x,int y,int color)
{
    int dir[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
    int k,tx,ty;
    for(int k=0;k<4;k++)
    {
        tx=x+next[k][0];
        ty=y+next[k][1];
        if(tx<1||tx>n||ty<1||ty>m)
        {
            continue;
        }
        if(a[tx][ty]>0&&book[tx][ty]==0)
        {
            sum++;
            book[tx][ty]=1;
            dfs(tx,ty,color);//找联通快不用管状态复原。
        }
    }
}
int main()
{
    int i,j,startx.starty;
    scanf("%d %d %d %d",&n,&m,&startx,&starty);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    book[startx][starty]=1;
    sum=1;
    dfs(startx,starty,-1);
    int emm=0;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=m;j++)
       {
           if(a[i][j]==-1)
           {
              emm++;
           }
       }
    }
    printf("%d\n",emm);
    return 0;
}
*/
/*#include<bits/stdc++.h>
using namespace std;
int a[51][51];
int book[51][51],n,m,sum;
void dfs(int x,int y,int color)
{
    int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    int tx,ty;
    a[tx][ty]=color;
    for(int k=0;k<=3;k++)
    {
        tx=x+dir[k][0];
        ty=y+dir[k][1];
        if(tx<1||tx>n||ty<1||ty>m)
        {
            continue;
        }
        if(a[tx][ty]>0&&book[tx][ty]==0)
        {
            sum++;
            book[tx][ty]=1;
            dfs(tx,ty,color);
        }
    }
    return;
}
int main()
{
     int num=0;
     scanf("%d %d",&n,&m);
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=m;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=m;j++)
         {
             num--;
             book[i][j]=1;
             dfs(i,j,num);
         }
     }
     int emm=0;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=m;j++)
         {
             if(a[i][j]<0)
             {
                emm++;
             }
         }
     }
     printf("%d\n",emm);
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
int book[51][51];
int a[51][51];
int sum=0;
void dfs(int x,int y,int color)
{
    int tx,ty;
    int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
    a[tx][ty]=color;
    for(int k=0;k<4;k++)
    {
       tx=x+next[k][0];
       ty=y+next[k][1];
       if(tx<1||tx>n||ty<1||ty>m)
       {
           continue;
       }
       if(a[tx][ty]>0&&book[tx][ty]==0)
       {
           sum++;
           book[tx][ty]=1;
           dfs(tx,ty,color);
       }
    }
    return;
}
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=m;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }
    int num=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
           num--;
           book[i][j]=1;
           dfs(i,j,num);
        }
    }
    return 0;
}
