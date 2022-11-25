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
    int n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for(auto& i:v)cin>>i.first;
    for(auto& i:v)cin>>i.second;
    vector<vector<ll>> z(2);
    for(auto& i:v){
        if(i.first)z[0].push_back(i.second);
        else z[1].push_back(i.second);
    }
    ll ans=0;
    for(auto& i:z){
        sort(i.begin(),i.end());
    }
    ll k=min(z[0].size(),z[1].size()),mn=1e9;
    while(k--){
        ans+=z[0].back()+z[1].back();
        mn=min(z[0].back(),z[1].back());
        z[0].pop_back();
        z[1].pop_back();
    }
    ans*=2;
    if(z[0].size()==z[1].size())ans-=mn;
    for(auto& i:z[0])ans+=i;
    for(auto& i:z[1])ans+=i;
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