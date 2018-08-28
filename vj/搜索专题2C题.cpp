#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
const int maxn=200001;
using namespace std;
int x,y;
int index;
bool flag;
vector<int> V;
int emm[maxn];
int bfs(int x,int step)
{
	if(x==y)
	{
	flag=1;
	return 0;
	}
	if(x-1>=0&&emm[x-1]==-1)
	{
		emm[x-1]=step+1;
		V.push_back(x-1);
	}
	if(x+1<200001&&emm[x*2]==-1)
	{
		emm[1+x]=step+1;
		V.push_back(1+x);
	}
	if(x*2<200001&&emm[x*2]==-1)
	{
		emm[x*2]=step+1;
		V.push_back(x*2);
	}
}
int main()
{
	cin>>x>>y;
	memset(emm,-1,sizeof(emm));
	V.clear();
	V.push_back(x);
	emm[x]=0;
	index=0;
	flag=0;
	while(!flag&&index<V.size())//一层一层的去搜索。
	{
		bfs(V[index],emm[V[index]]);
		index++;
	 } 
	 cout<<emm[y]<<endl;
	return 0;
 } 
