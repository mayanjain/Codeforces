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

bool check(ll mid,vector<ll>& v){
    auto lo=-1,up=(int)v.size()-1;
    while(mid){
        while(up>lo && v[up]>mid){
            up--;
        }
        if(up<=lo)break;
        mid--;
        lo++;
        up--;
    }
    return mid==0;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    sort(v.begin(),v.end());
    ll l=0,h=n;
    while(h-l>1){
        ll mid=(l+h)/2;
        if(check(mid,v))l=mid;
        else h=mid-1;
    }
    if(check(h,v))cout<<h<<'\n';
    else cout<<l<<'\n';
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