// Codeforces Problem - 166E

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1000000007;
const int N = 1e7+2;
int dp[2][N];
int vis[2][N];

int main()
{
	ios::sync_with_stdio();
	cin.tie(NULL);
	ll n;
	cin>>n;
	dp[1][0] = 1;
	for(int i=1;i<N;i++)
	{
		dp[1][i] = (3LL*dp[0][i-1])%mod;
		dp[0][i] = ((2LL*dp[0][i-1])+dp[1][i-1])%mod;
	}
	cout<<dp[1][n]<<endl;
	return 0;
}
	