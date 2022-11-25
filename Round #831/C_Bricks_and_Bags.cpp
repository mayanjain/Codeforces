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
    ll n,ans=0;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    sort(v.begin(),v.end());
    vector<ll> z{v[0]};
    for(auto& i:v){
        if(i!=z.back())z.push_back(i);
    }
    if(z.size()<=2){
        ans=2*(z.back()-z[0]);
    }
    else{
        n=z.size();
        ans=z[n-1]-z[0]+max(z[1]-z[0],z[n-1]-z[n-2]);
        for(int i=1 ; i<n-1 ; i++){
            ll cur=z[i]-z[0],cur2=z[n-1]-z[i];
            if(i==1){
                cur+=z[i+1]-z[i];
            }
            else cur+=min(z[i+1]-z[i],z[i]-z[i-1]);
            if(i==n-2){
                cur2+=z[i]-z[i-1];
            }
            else{
                cur2+=min(z[i]-z[i-1],z[i+1]-z[i]);
            }
            ans=max({ans,cur,cur2});
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