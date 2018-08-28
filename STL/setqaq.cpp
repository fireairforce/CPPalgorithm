
void getp(int n)
{
	int i,j;
	k=0;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			p[k++]=i;
			while(n%i==0)
				n/=i;
		}
	}
	if(n>1)
		p[k++]=n;
}
int solve(int n)
{
	int i,j,kk,t=0,sum=0;
	q[t++]=-1;
	for(i=0;i<k;i++)
	{
		kk=t;
		for(j=0;j<kk;j++)
			q[t++]=p[i]*q[j]*-1;
	}
	for(i=1;i<t;i++)
		sum+=n/q[i];
	return sum;
}
int main()
{
	int t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		int cnt=n;
		for(int i=2;i<=m;i++)
		{
			getp(i);
			cnt+=n-solve(n);
		}
		printf("%d\n",cnt);
	}
	return 0;
}


