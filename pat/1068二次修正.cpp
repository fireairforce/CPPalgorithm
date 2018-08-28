#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct Node
{
    int x, y, color;
}node;
int M, N, TOL;
const int maxn = 1000+10;
int a[maxn][maxn];
int cnt[1 << 24] = { 0 };
int dx[] = { -1,-1,-1,0,0,1,1,1 };
int dy[] = { 1,0,-1,1,-1,1,0,-1 };
bool check(int x, int y)
{
    if (x < 0 || y < 0 || x >= N || y >= M)
        return false;
    return true;
}
int main()
{
    scanf("%d%d%d", &M, &N,&TOL);
    vector<Node>v;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
            cnt[a[i][j]]++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (cnt[a[i][j]]==1)//注意独一无二！！！！
            {
                bool flag = false;
                for (int k = 0; k < 8; k++)
                {
                    if (check(i + dx[k], j + dy[k])&&
                        abs(a[i + dx[k]][j + dy[k]]
                            - a[i][j]) <= TOL)//注意不要只在内圈中扫描而是应该扫描所有像素
                    {
                        flag = true; break;
                    }
                }
                if (!flag)
                {
                    node.x = j + 1; node.y = i + 1;
                    node.color = a[i][j];
                    v.push_back(node);
                }
            }
        }
    }
    if (v.size() == 1)
    {
        printf("(%d, %d): %d", v[0].x, v[0].y, v[0].color);
    }
    else if (v.size() == 0)printf("Not Exist");
    else printf("Not Unique");
    return 0;
}
