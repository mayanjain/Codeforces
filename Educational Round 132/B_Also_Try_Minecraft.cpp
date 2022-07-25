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
    ll n,q,x,y;
    cin>>n>>q;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    vector<ll> suf(n),pref(n);
    for(int i=1 ; i<n ; i++){
        suf[i]=suf[i-1];
        if(v[i]<v[i-1])suf[i]+=v[i-1]-v[i];
    }
    for(int i=n-2 ; i>=0 ; i--){
        pref[i]=pref[i+1];
        if(v[i]<v[i+1])pref[i]+=v[i+1]-v[i];
    }
    while(q--){
        cin>>x>>y;
        x--;y--;
        if(x>y){
            cout<<pref[y]-pref[x]<<'\n';
        }
        else{
            cout<<suf[y]-suf[x]<<'\n';
        }
    }
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