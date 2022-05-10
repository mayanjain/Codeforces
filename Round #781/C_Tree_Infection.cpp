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
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> edges(n+1);
    for(int i=0 ; i<n-1 ; i++){
        cin>>v[i];
        edges[v[i]]++;
    }
    vector<ll> sizes;
    sizes.push_back(1);
    for(auto& i:edges){
        if(i)sizes.push_back(i);
    }
    sort(sizes.begin(),sizes.end(),greater<ll>());
    ll ans=sizes.size();
    priority_queue<ll> pq;
    for(auto& i:sizes){
        pq.push(i);
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