#include<bits/stdc++.h>
using namespace std;
map<string, int>vis;
struct node
{
    int endA;//endA为最终的A的位置，即一开始的B的位置
    int endB;//endA为最终的B的位置，即一开始的A的位置

};
struct point
{
    int nowx, nowy;//空格的位置
};
string input()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    return str1 + str2;

}
int  BFS(string start, node end)
{
    queue<string> Q;
    string Tr;
    int i;
    int dir[4][2] = { { 1,0 },{ 0,1 },{ -1,0 },{ 0,-1 } };
    point S, P;
    Q.push(start);
    vis[start] = 1;
    while (!Q.empty())
    {
        Tr = Q.front();
        Q.pop();
        if (Tr[end.endA] == 'A'&&Tr[end.endB] == 'B')
        {
            return vis[Tr]-1;
        }
        for (i = 0; i<6; i++)
        {
            if (Tr[i] == ' ')
            {
                S.nowx = i / 3;
                S.nowy = i % 3;

            }
        }
        for ( i = 0; i<4; i++)
        {
            P.nowx = S.nowx + dir[i][0];
            P.nowy = S.nowy + dir[i][1];
            if (P.nowx >= 0 && P.nowx<2 && P.nowy >= 0 && P.nowy<3)
            {
                string temp = Tr;
                swap(temp[P.nowx * 3 + P.nowy], temp[S.nowx * 3 + S.nowy]);
                if (vis[temp]) continue;
                vis[temp] = vis[Tr] + 1;
                Q.push(temp);

            }
        }
    }
    return -1;
}
int main()
{
    int i, j;
    string start;//每个状态的编码.
    node end;
        start = input();
        for (i = 0; i < 6; i++)
        {
            if (start[i] == 'A') end.endB = i;
            if (start[i] == 'B') end.endA = i;
        }
        vis.clear();
        cout << BFS(start, end) << endl;
    return 0;
}
