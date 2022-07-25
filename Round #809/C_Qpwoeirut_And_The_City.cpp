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

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n),pre(n);
    for(auto& i:v)cin>>i;
    ll cur=0;
    if(n%2){
        for(int i=1 ; i<n-1 ; i+=2){
            if(v[i]<=v[i-1] || v[i]<=v[i+1])cur+=max(v[i-1],v[i+1])-v[i]+1;
        }
        cout<<cur<<'\n';
    }
    else{
        for(int i=n-2 ; i>=1 ; i--){
            pre[i]=max(max(v[i+1],v[i-1])-v[i]+1,0LL);
            if(i+2<n)pre[i]+=pre[i+2];
        }
        ll ans=min(pre[1],pre[2]);
        for(int i=1 ; i<n-2 ; i+=2){
            cur+=max(max(v[i+1],v[i-1])-v[i]+1,0LL);
            ans=min(ans,cur+pre[i+2]);
            if(i+3<n)ans=min(ans,cur+pre[i+3]);
        }
        cout<<ans<<'\n';
    }
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