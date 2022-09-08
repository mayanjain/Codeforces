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
    ll mx=0;
    vector<ll> mp(n);
    for(int i=1 ; i<n ; i++){
        if(v[i]>v[mx]){
            mx=i;
        }
        mp[mx]++;
    }
    while(q--){
        cin>>x>>y;
        x--;
        if(!mp[x] || y<x)cout<<"0\n";
        else{
            if(x==0){
                if(mx==x)cout<<y<<'\n';
                else{
                    cout<<min(mp[x],y)<<'\n';
                }
            }
            else{
                y-=(x-1);
                if(mx==x)cout<<y<<'\n';
                else cout<<min(y,mp[x])<<'\n';
            }
        }
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