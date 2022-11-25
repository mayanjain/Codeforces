#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

bool solvin(ll odd,ll even,bool chance,ll sum,vector<vector<vector<int>>>& dp){
    if(!odd && !even)return sum%2==0;
    if(dp[odd][even][sum%2]!=-1){
        return dp[odd][even][sum%2];
    }
    if(chance){
        bool cur=1;
        if(odd)cur&=solvin(odd-1,even,0,sum,dp);
        if(even)cur&=solvin(odd,even-1,0,sum,dp);
        return dp[odd][even][sum%2]=cur;
    }
    bool cur=0;
    if(odd)cur|=solvin(odd-1,even,1,sum+1,dp);
    if(even)cur|=solvin(odd,even-1,1,sum,dp);
    return dp[odd][even][sum%2]=cur;
}

void solve(){
    ll n,even=0,odd=0,x;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cin>>x;
        if(x%2)odd++;
        else even++;
    }
    vector<vector<vector<int>>> dp(odd+1,vector<vector<int>>(even+1,vector<int>(2,-1)));
    if(solvin(odd,even,0,0,dp))cout<<"Alice\n";
    else cout<<"Bob\n";
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}