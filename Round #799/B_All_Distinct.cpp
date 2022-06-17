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
    vector<ll> v(n);
    map<ll,ll> mp;
    for(auto& i:v){
        cin>>i;
        mp[i]++;
    }
    for(int i=0 ; i<n ; i++){
        if(mp[v[i]]>1){
            mp[v[i]]--;
            ll x=0;
            for(int j=0 ; j<n ; j++){
                if(mp[v[j]]>mp[x]){
                    x=v[j];
                }
                else if(mp[v[j]]==mp[x] && x==v[i]){
                    x=v[j];
                }
            }
            mp[x]--;
        }
    }
    ll ans=0;
    for(auto& i:mp){
        if(i.second)ans++;
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