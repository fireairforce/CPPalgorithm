#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
using namespace std;
int n, t, i, Case, ans;
const int N=1e7;
bool a[N+1];
vector<int> prime;
void get_prime() {
memset(a,true,sizeof(a));
for(int i=2;i<=N;i++)
{
  if(N%2==0)
    {
        if(a[i]) prime.push_back(i);
        for(int j=0;j<prime.size()&&i*prime[j]<=N;j++)
        {
            a[i*prime[j]]=false;
            if(!(i%prime[j])) break;
        }
    }
}
}
int main() {
    cin>> t;
    get_prime() ;
    while(t--) {
        cin>> n;
        ans= 0;
        for(i= 0;i< prime.size(); i++)
        {

            if(prime[i]>=n/2+1)
            {
                break;
            }
            if(a[n-prime[i]]==1)
            {
                   ans++;
            }
        }
        cout<<"Case "<<++Case<<": "<<ans<<endl;
    }
    return 0 ;
}
