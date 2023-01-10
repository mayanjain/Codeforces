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
    ll n,m,a,b;
    cin>>n>>m;
    vector<ll> unhappy(n+1);
    for(int i=1 ; i<=n ; i++){
        cin>>unhappy[i];
    }
    map<ll,ll> mp;
    vector<pair<ll,ll>> v;
    for(int i=0 ; i<m ; i++){
        cin>>a>>b;
        v.push_back({a,b});
        mp[a]++;
        mp[b]++;
    }
    if(m%2==0){
        cout<<0<<'\n';
        return;
    }
    ll ans=INT_MAX;
    for(auto& i:v){
        if(mp[i.first]%2)ans=min(ans,unhappy[i.first]);
        if(mp[i.second]%2)ans=min(ans,unhappy[i.second]);
        if(mp[i.first]%2==0 && mp[i.second]%2==0){
            ans=min(ans,unhappy[i.second]+unhappy[i.first]);
        }
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