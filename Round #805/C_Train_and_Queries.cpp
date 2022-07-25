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
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    map<ll,ll> first,last; 
    for(int i=0 ; i<n ; i++){
        if(!first.count(v[i]))first[v[i]]=i;
    }
    for(int i=n-1 ; i>=0 ; i--){
        if(!last.count(v[i]))last[v[i]]=i;
    }
    while(q--){
        ll x,y;
        cin>>x>>y;
        if(first.count(x) && last.count(y) && first[x]<=last[y])cout<<"YES\n";
        else cout<<"NO\n";
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