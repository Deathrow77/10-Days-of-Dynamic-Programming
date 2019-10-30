#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;
const int N = 1000000002;

bool vis[N][N] = {0};
ll dp[N][N];

ll ways(vector<ll> &A, ll pos, ll s, ll n)
{
    if(pos==n)
        return s==0;
    int &ans = dp[pos][s];
    if(s<0)
        return 0;
    if(vis[pos][s])
        return ans;
    vis[pos][s] = 1;
    ans = 0;
    ans = ways(A, pos, s-A[pos], n) + ways(A, pos+1, s, n);
    return ans;
}

int main()
{
    ll n, s;
    cin>>n, s;
    vector<ll> A(n, 0);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<< ways(A, 0, s, n)<<endl;
    return 0;
}
