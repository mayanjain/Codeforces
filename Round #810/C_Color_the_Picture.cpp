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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(k);
    for(auto& i:v)cin>>i;
    sort(v.begin(),v.end(),greater<ll>());
    ll cur=0,x=0;
    for(auto& i:v){
        if(i>=2*m){
            cur+=i/m;
            if(i>=3*m)x++;
        }
    }
    if(cur>=n){
        if(n%2==0 || x){
            cout<<"Yes\n";
            return;
        }
    }
    cur=0,x=0;
    for(auto& i:v){
        if(i>=2*n){
            cur+=i/n;
            if(i>=3*n)x++;
        }
    }
    if(cur>=m){
        if(m%2==0 || x){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
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