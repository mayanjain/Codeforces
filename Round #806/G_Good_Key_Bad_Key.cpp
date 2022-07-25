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

ll solve(ll mid,vector<ll>& v,ll k,ll mx){
    ll f=2,cur=0,n=v.size();
    for(int i=mid ; i<n ; i++){
        cur+=v[i]/f;
        f*=2;
        if(f>mx)break;
    }
    return cur;
}

void solve(){
    ll n,k,mx=0;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto& i:v){
        cin>>i;
        mx=max(i,mx);
    }
    ll cur=0;
    ll ans=solve(0,v,k,mx);
    for(int i=0 ; i<n ; i++){
        cur+=v[i];
        cur-=k;
        ans=max(ans,cur+solve(i+1,v,k,mx));
    }
    cout<<ans<<'\n';
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