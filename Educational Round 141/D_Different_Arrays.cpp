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

map<vector<ll>,ll> mp;

ll solvin(vector<ll>& v,int id){
    if(id==v.size()-1)return 1;
    if(mp.count({id,v[id-1],v[id]})){
        // cout<<mp[{id,v[id-1],v[id]}]<<" ";
        return mp[{id,v[id-1],v[id]}];
    }
    v[id-1]+=v[id];
    v[id+1]-=v[id];
    ll ans=solvin(v,id+1);
    v[id-1]-=2*v[id];
    v[id+1]+=2*v[id];
    ans+=solvin(v,id+1);
    v[id-1]+=v[id];
    v[id+1]-=v[id];
    return mp[{id,v[id-1],v[id]}]=ans;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    cout<<solvin(v,1)-1<<'\n';
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}