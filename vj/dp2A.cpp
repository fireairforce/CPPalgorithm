#include<iostream> 
#include<algorithm> 
#include<cstdio> 
#include<cstring> 
#include<set> 
#include<cmath> 
#include<vector> 
#include<map> 
using namespace std; 
typedef long long ll; 
const int maxn = 1010; 
char str1[maxn]; 
char str2[maxn]; 
int dp[maxn][maxn]; 
int main() 
{ while(~scanf("%s%s",str1,str2)) { int len1 = strlen(str1); int len2 = strlen(str2); memset(dp,0,sizeof(dp)); for(int i = 0 ; i < len1; i++) for(int j = 0; j < len2; j++) { dp[i+1][j+1] = dp[i][j]; if(str1[i]==str2[j]) dp[i+1][j+1] = dp[i][j] + 1; else dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]); } cout << dp[len1][len2]<<endl; } return 0 ; } 

