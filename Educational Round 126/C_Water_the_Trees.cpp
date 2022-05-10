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
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solve(){
    ll n,mx=0;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v){
        cin>>i;
        mx=max(i,mx);
    }
    ll total=0;
    for(auto& i:v){
        total+=mx-i;
    }
    total*=2;
    ll k=mx,ans=LONG_LONG_MAX;
    for(ll mx=k ; mx<=k+20 ; mx++){
        ll l=0,h=total;
        while(l<h){
            ll m=(l+h)/2;
            ll ev=m/2,od=(m+1)/2;
            for(auto& i:v){
                ll req=mx-i;
                if(req%2){
                    od--;
                    req--;
                }
                ll cur=min(ev,req/2);
                req-=cur*2;
                ev-=cur;
                if(req)od-=req;
                if(od<0)break;
            }
            if(od>=0)h=m;
            else l=m+1;
        }
        ans=min(ans,l);
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