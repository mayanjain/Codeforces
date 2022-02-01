#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

vector<ll> mn(1e3+1,1e9);

ll solvin(vector<ll>& a,vector<ll>& c,ll cur,ll k,vector<vector<ll>>& dp){
    if(cur<0)return 0;
    if(dp[cur][k]!=-1)return dp[cur][k];
    if(a[cur]>k){
        return dp[cur][k]=solvin(a,c,cur-1,k,dp);
    }
    return dp[cur][k]=max(c[cur]+solvin(a,c,cur-1,k-a[cur],dp),solvin(a,c,cur-1,k,dp));
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> b(n),c(n);
    for(auto& i:b)cin>>i;
    for(auto& i:c)cin>>i;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        a[i]=mn[b[i]];
    }
    k=min(k,12*n);
    vector<vector<ll>> v(n+1,vector<ll>(k+1,-1));
    cout<<solvin(a,c,n-1,k,v)<<'\n';
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mn[1]=0;
    for(int i=1; i<=1000 ; i++){
        for(int j=1 ; j<=i ; j++){
            if(i+i/j>1000)continue;
            mn[i+i/j]=min(mn[i+i/j],mn[i]+1);
        }
    }
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}    